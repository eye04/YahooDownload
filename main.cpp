#include "Widget.h"
#include <QApplication>
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /* 中文顯示編碼設定 */
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));

//    QDate DateStart(2013,6,1);
//    QDate DateEnd(2013,6,29);
    Widget w;




    w.show();

    return a.exec();
}
