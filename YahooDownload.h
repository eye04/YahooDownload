#ifndef YahooDownload_H
#define YahooDownload_H

#include <QtCore>
#include <QtGui>
#include <QtNetwork>

class YahooDownload : public QObject
{
    Q_OBJECT

public:
    YahooDownload(QString query, QObject *parent = 0);
    void downloadFile(const QUrl &url);
    
signals:
    void finished();
    
private slots:
    void done(bool error);

    void slot_setProgressDialog(int done, int total);
    void slot_cancel();
    
private:
    QString FilePathName;
    QHttp* http;
    QFile* file;
    QProgressDialog* progressDialog;
};

#endif
