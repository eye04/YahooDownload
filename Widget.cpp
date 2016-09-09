#include "Widget.h"
#include "ui_Widget.h"

#include "YahooDownloadWidget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    YahooDownloadWidget *m_down=new YahooDownloadWidget();
    m_down->show();


}

Widget::~Widget()
{
    delete ui;
}
