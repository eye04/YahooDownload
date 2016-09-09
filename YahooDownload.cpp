#include "YahooDownload.h"

YahooDownload::YahooDownload(QString query, QObject *parent) : QObject(parent)
{
    QStringList l = query.split(".");
    if (l[0] != "")
        FilePathName = tr("sql/StockData/GlobalDataSource/") + query;
    else
        FilePathName = tr("sql/StockData/GlobalDataSource/index.csv");

    http = new QHttp(this);
    connect(http, SIGNAL(dataReadProgress(int,int)), this, SLOT(slot_setProgressDialog(int,int)));
    connect(http, SIGNAL(done(bool)), this, SLOT(done(bool)));

    progressDialog = new QProgressDialog;
    progressDialog->setWindowTitle(tr("下載視窗"));
    progressDialog->setLabelText(tr("下載中..."));
    connect(progressDialog, SIGNAL(canceled()), this, SLOT(slot_cancel()));

    this->downloadFile(QUrl(tr("http://ichart.yahoo.com/table.csv?s=") + query));
}

void YahooDownload::downloadFile(const QUrl &url)
{
    file = new QFile(FilePathName);
    if (!file->open(QIODevice::WriteOnly)) {
        qDebug() << "Unable to save the file";
        delete file;
        file = 0;
        return;
    }

    http->setHost(url.host(), url.port(80));
    //[說明]QHttp::get() 會自己跑一條執行緒
    http->get(url.toString(), file);
    progressDialog->exec();
}

void YahooDownload::done(bool error)
{
    progressDialog->reset();

    if (error)
        qDebug() << "Error:" << qPrintable(http->errorString());
    else
        qDebug() << "File downloaded as" << qPrintable(file->fileName());

    //[說明]file->close()如果沒有被正確執行 會造成下載的資料沒有完整下載
    file->close();
    delete file;
    file = 0;
    
    http->close();
}

void YahooDownload::slot_setProgressDialog(int done, int total)
{
    //[重大錯誤]以下程式碼會在檔案下載結束時和file->close()指令發生衝突
    //        file->close()不會被正確執行 造成下載的資料沒有完整下載
    //progressDialog->setRange(0,total);
    //progressDialog->setValue(done);
    //[暫時替代方案]
    progressDialog->setRange(0,0);
    progressDialog->setValue(0);
}

void YahooDownload::slot_cancel()
{
    http->close();

    QString command = "rm "+FilePathName;
    system(command.toAscii());
}
