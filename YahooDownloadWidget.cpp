#include "YahooDownloadWidget.h"
#include "YahooDownload.h"

YahooDownloadWidget::YahooDownloadWidget()
{
    this->setWindowTitle(tr("eyeball GlobalExchanges"));
    this->setEditTriggers(QAbstractItemView::NoEditTriggers);   //編輯觸發器 關閉
    this->setSelectionMode(QAbstractItemView::SingleSelection); //選擇模式 單選
    this->setSelectionBehavior(QAbstractItemView::SelectRows);  //選擇行為 橫列
    QPalette palette;                                 //設定欄位反白顏色
    palette.setColor(QPalette::Highlight,Qt::yellow);
    palette.setColor(QPalette::HighlightedText,Qt::black);
    this->setPalette(palette);
    this->setShowGrid(false);            //網格設定 關閉
    this->setAlternatingRowColors(true); //交替行顏色 開啟(預設灰白色)
    this->verticalHeader()->hide();      //垂直標頭設定 隱藏
    this->setRowCount(59);
    this->setColumnCount(4);
    initData();
    this->resizeColumnsToContents();
    this->resize(880,540);
}

void YahooDownloadWidget::initData()
{
    this->setHorizontalHeaderLabels(tr("交易所中文代碼,交易所英文代碼,輸入商品代碼,資料載入").split(","));

    this->setItem(0,0,new QTableWidgetItem(tr("台灣證券交易所")));
    this->setItem(1,0,new QTableWidgetItem(tr("台灣OTC上市")));
    this->setItem(2,0,new QTableWidgetItem(tr("中國上海證券交易所")));
    this->setItem(3,0,new QTableWidgetItem(tr("中國深圳證券交易所")));
    this->setItem(4,0,new QTableWidgetItem(tr("韓國證券交易所韓國")));
    this->setItem(5,0,new QTableWidgetItem(tr("韓國KOSDAQ")));
    this->setItem(6,0,new QTableWidgetItem(tr("澳大利亞證券交易所")));
    this->setItem(7,0,new QTableWidgetItem(tr("新加坡證券交易所")));
    this->setItem(8,0,new QTableWidgetItem(tr("美國證券交易所")));
    this->setItem(9,0,new QTableWidgetItem(tr("美國BATS交易所")));
    this->setItem(10,0,new QTableWidgetItem(tr("美國芝加哥期貨交易所")));
    this->setItem(11,0,new QTableWidgetItem(tr("美國芝加哥商品交易所CME")));
    this->setItem(12,0,new QTableWidgetItem(tr("美國道瓊斯指數")));
    this->setItem(13,0,new QTableWidgetItem(tr("美國納斯達克證券交易所")));
    this->setItem(14,0,new QTableWidgetItem(tr("美國紐約NYB")));
    this->setItem(15,0,new QTableWidgetItem(tr("美國紐約Commodities商品交易所	")));
    this->setItem(16,0,new QTableWidgetItem(tr("美國紐約Mercantile 商品交易所")));
    this->setItem(17,0,new QTableWidgetItem(tr("美國紐約證券交易所 上市")));
    this->setItem(18,0,new QTableWidgetItem(tr("美國美國場外交易 公告牌市場")));
    this->setItem(19,0,new QTableWidgetItem(tr("美國美國粉單市場")));
    this->setItem(20,0,new QTableWidgetItem(tr("美國S＆P指數")));
    this->setItem(21,0,new QTableWidgetItem(tr("阿根廷布宜諾斯艾利斯證券交易所)")));
    this->setItem(22,0,new QTableWidgetItem(tr("奧地利維也納證券交易所")));
    this->setItem(23,0,new QTableWidgetItem(tr("巴西聖保羅證券交易所")));
    this->setItem(24,0,new QTableWidgetItem(tr("加拿大多倫多證券交易所")));
    this->setItem(25,0,new QTableWidgetItem(tr("加拿大多倫多證券交易所創業板")));
    this->setItem(26,0,new QTableWidgetItem(tr("智利聖地亞哥證券交易所")));
    this->setItem(27,0,new QTableWidgetItem(tr("丹麥哥本哈根證券交易所")));
    this->setItem(28,0,new QTableWidgetItem(tr("法國泛歐交易所")));
    this->setItem(29,0,new QTableWidgetItem(tr("法國巴黎證券交易所 ")));
    this->setItem(30,0,new QTableWidgetItem(tr("德國柏林證券交易所")));
    this->setItem(31,0,new QTableWidgetItem(tr("德國不來梅證券交易所")));
    this->setItem(32,0,new QTableWidgetItem(tr("德國法蘭克福證券交易所")));
    this->setItem(33,0,new QTableWidgetItem(tr("德國漢堡證券交易所")));
    this->setItem(34,0,new QTableWidgetItem(tr("德國斯圖加特證券交易所")));
    this->setItem(35,0,new QTableWidgetItem(tr("德國不來梅證券交易所")));
    this->setItem(36,0,new QTableWidgetItem(tr("德國法蘭克福證券交易所")));
    this->setItem(37,0,new QTableWidgetItem(tr("德國漢堡證券交易所")));
    this->setItem(38,0,new QTableWidgetItem(tr("德國股市證券交易所")));
    this->setItem(39,0,new QTableWidgetItem(tr("香港香港聯交所")));
    this->setItem(40,0,new QTableWidgetItem(tr("印度孟買證券交易所")));
    this->setItem(41,0,new QTableWidgetItem(tr("印度國家證券交易所")));
    this->setItem(42,0,new QTableWidgetItem(tr("印尼 雅加達證券交易所")));
    this->setItem(43,0,new QTableWidgetItem(tr("以色列特拉維夫證券交易所 ")));
    this->setItem(44,0,new QTableWidgetItem(tr("意大利米蘭證券交易所")));
    this->setItem(45,0,new QTableWidgetItem(tr("日本日經指數")));
    this->setItem(46,0,new QTableWidgetItem(tr("墨西哥證券交易所")));
    this->setItem(47,0,new QTableWidgetItem(tr("荷蘭阿姆斯特丹證券交易所")));
    this->setItem(48,0,new QTableWidgetItem(tr("新西蘭證券交易所")));
    this->setItem(49,0,new QTableWidgetItem(tr("挪威奧斯陸證券交易所")));
    this->setItem(50,0,new QTableWidgetItem(tr("西班牙巴塞羅那證券交易所")));
    this->setItem(51,0,new QTableWidgetItem(tr("西班牙畢爾巴鄂證券交易所")));
    this->setItem(52,0,new QTableWidgetItem(tr("西班牙馬德里固定收益市場")));
    this->setItem(53,0,new QTableWidgetItem(tr("西班牙SE C.A.T.S.馬德里")));
    this->setItem(54,0,new QTableWidgetItem(tr("西班牙馬德里證券交易所")));
    this->setItem(55,0,new QTableWidgetItem(tr("瑞典斯德哥爾摩證券交易所")));
    this->setItem(56,0,new QTableWidgetItem(tr("瑞士交易所")));
    this->setItem(57,0,new QTableWidgetItem(tr("英國富時指數")));
    this->setItem(58,0,new QTableWidgetItem(tr("英國倫敦證券交易所")));


    this->setItem(0,1,new QTableWidgetItem(tr("Taiwan Stock Exchange")));
    this->setItem(1,1,new QTableWidgetItem(tr("Taiwan OTC Exchange")));
    this->setItem(2,1,new QTableWidgetItem(tr("China Shanghai Stock Exchange")));
    this->setItem(3,1,new QTableWidgetItem(tr("China Shenzhen Stock Exchange")));
    this->setItem(4,1,new QTableWidgetItem(tr("South Korea Korea Stock Exchange")));
    this->setItem(5,1,new QTableWidgetItem(tr("KOSDAQ")));
    this->setItem(6,1,new QTableWidgetItem(tr("Australian Stock Exchange")));
    this->setItem(7,1,new QTableWidgetItem(tr("Singapore Stock Exchange")));
    this->setItem(8,1,new QTableWidgetItem(tr("American Stock Exchange")));
    this->setItem(9,1,new QTableWidgetItem(tr("BATS Exchange")));
    this->setItem(10,1,new QTableWidgetItem(tr("Chicago Board of Trade")));
    this->setItem(11,1,new QTableWidgetItem(tr("Chicago Mercantile Exchange CME")));
    this->setItem(12,1,new QTableWidgetItem(tr("Dow Jones Indexes")));
    this->setItem(13,1,new QTableWidgetItem(tr("NASDAQ Stock Exchange")));
    this->setItem(14,1,new QTableWidgetItem(tr("New York Board of Trad NYB")));
    this->setItem(15,1,new QTableWidgetItem(tr("New York Commodities Exchange")));
    this->setItem(16,1,new QTableWidgetItem(tr("New York Mercantile Exchange")));
    this->setItem(17,1,new QTableWidgetItem(tr("New York Stock Exchange")));
    this->setItem(18,1,new QTableWidgetItem(tr("OTC Bulletin Board Market")));
    this->setItem(19,1,new QTableWidgetItem(tr("Pink Sheets")));
    this->setItem(20,1,new QTableWidgetItem(tr("S & P Indices")));
    this->setItem(21,1,new QTableWidgetItem(tr("Argentina Buenos Aires Stock Exchange")));
    this->setItem(22,1,new QTableWidgetItem(tr("Austria Vienna Stock Exchange")));
    this->setItem(23,1,new QTableWidgetItem(tr("Brazil Sao Paolo Stock Exchange")));
    this->setItem(24,1,new QTableWidgetItem(tr("Canada Toronto Stock Exchange")));
    this->setItem(25,1,new QTableWidgetItem(tr("Canada TSX Venture Exchange")));
    this->setItem(26,1,new QTableWidgetItem(tr("Chile Santiago Stock Exchange")));
    this->setItem(27,1,new QTableWidgetItem(tr("Denmark Copenhagen Stock Exchange")));
    this->setItem(28,1,new QTableWidgetItem(tr("France Euronext")));
    this->setItem(29,1,new QTableWidgetItem(tr("France Paris Stock Exchange")));
    this->setItem(30,1,new QTableWidgetItem(tr("Germany Berlin Stock Exchange")));
    this->setItem(31,1,new QTableWidgetItem(tr("Germany Bremen Stock Exchange")));
    this->setItem(32,1,new QTableWidgetItem(tr("Germany Dusseldorf Stock Exchange")));
    this->setItem(33,1,new QTableWidgetItem(tr("Germany Frankfurt Stock Exchange")));
    this->setItem(34,1,new QTableWidgetItem(tr("Germany Hamburg  Stock Exchange")));
    this->setItem(35,1,new QTableWidgetItem(tr("Germany Hanover Stock Exchange")));
    this->setItem(36,1,new QTableWidgetItem(tr("Germany Munich Stock Exchange")));
    this->setItem(37,1,new QTableWidgetItem(tr("Germany Stuttgart Stock Exchange")));
    this->setItem(38,1,new QTableWidgetItem(tr("Germany XETRA Stock Exchange")));
    this->setItem(39,1,new QTableWidgetItem(tr("Hong Kong Stock Exchange")));
    this->setItem(40,1,new QTableWidgetItem(tr("India Bombay Stock Exchange")));
    this->setItem(41,1,new QTableWidgetItem(tr("India National Stock Exchange of India")));
    this->setItem(42,1,new QTableWidgetItem(tr("Indonesia Jakarta Stock Exchange")));
    this->setItem(43,1,new QTableWidgetItem(tr("Israel Tel Aviv Stock Exchange")));
    this->setItem(44,1,new QTableWidgetItem(tr("Italy Milan Stock Exchange")));
    this->setItem(45,1,new QTableWidgetItem(tr("Japan Nikkei Indices ")));
    this->setItem(46,1,new QTableWidgetItem(tr("Mexico Mexico Stock Exchange")));
    this->setItem(47,1,new QTableWidgetItem(tr("Netherlands Amsterdam Stock Exchange")));
    this->setItem(48,1,new QTableWidgetItem(tr("New Zealand Stock Exchange")));
    this->setItem(49,1,new QTableWidgetItem(tr("Norway Oslo Stock Exchange")));
    this->setItem(50,1,new QTableWidgetItem(tr("Spain Barcelona Stock Exchange")));
    this->setItem(51,1,new QTableWidgetItem(tr("Spain Bilbao Stock Exchange")));
    this->setItem(52,1,new QTableWidgetItem(tr("Spain Madrid Fixed Income Market")));
    this->setItem(53,1,new QTableWidgetItem(tr("Spain Madrid SE C.A.T.S.")));
    this->setItem(54,1,new QTableWidgetItem(tr("Spain Madrid Stock Exchange")));
    this->setItem(55,1,new QTableWidgetItem(tr("Sweden Stockholm Stock Exchange")));
    this->setItem(56,1,new QTableWidgetItem(tr("Switzerland Swiss Exchange")));
    this->setItem(57,1,new QTableWidgetItem(tr("United Kingdom FTSE Indices")));
    this->setItem(58,1,new QTableWidgetItem(tr("United Kingdom London Stock Exchange")));


    Symbol_0 = new QLineEdit;
    Symbol_1 = new QLineEdit;
    Symbol_2 = new QLineEdit;
    Symbol_3 = new QLineEdit;
    Symbol_4 = new QLineEdit;
    Symbol_5 = new QLineEdit;
    Symbol_6 = new QLineEdit;
    Symbol_7 = new QLineEdit;
    Symbol_8 = new QLineEdit;
    Symbol_9 = new QLineEdit;
    Symbol_10 = new QLineEdit;
    Symbol_11 = new QLineEdit;
    Symbol_12 = new QLineEdit;
    Symbol_13 = new QLineEdit;
    Symbol_14 = new QLineEdit;
    Symbol_15 = new QLineEdit;
    Symbol_16 = new QLineEdit;
    Symbol_17 = new QLineEdit;
    Symbol_18 = new QLineEdit;
    Symbol_19 = new QLineEdit;
    Symbol_20 = new QLineEdit;
    Symbol_21 = new QLineEdit;
    Symbol_22 = new QLineEdit;
    Symbol_23 = new QLineEdit;
    Symbol_24 = new QLineEdit;
    Symbol_25 = new QLineEdit;
    Symbol_26 = new QLineEdit;
    Symbol_27 = new QLineEdit;
    Symbol_28 = new QLineEdit;
    Symbol_29 = new QLineEdit;
    Symbol_30 = new QLineEdit;
    Symbol_31 = new QLineEdit;
    Symbol_32 = new QLineEdit;
    Symbol_33 = new QLineEdit;
    Symbol_34 = new QLineEdit;
    Symbol_35 = new QLineEdit;
    Symbol_36 = new QLineEdit;
    Symbol_37 = new QLineEdit;
    Symbol_38 = new QLineEdit;
    Symbol_39 = new QLineEdit;
    Symbol_40 = new QLineEdit;
    Symbol_41 = new QLineEdit;
    Symbol_42 = new QLineEdit;
    Symbol_43 = new QLineEdit;
    Symbol_44 = new QLineEdit;
    Symbol_45 = new QLineEdit;
    Symbol_46 = new QLineEdit;
    Symbol_47 = new QLineEdit;
    Symbol_48 = new QLineEdit;
    Symbol_49 = new QLineEdit;
    Symbol_50 = new QLineEdit;
    Symbol_51 = new QLineEdit;
    Symbol_52 = new QLineEdit;
    Symbol_53 = new QLineEdit;
    Symbol_54 = new QLineEdit;
    Symbol_55 = new QLineEdit;
    Symbol_56 = new QLineEdit;
    Symbol_57 = new QLineEdit;
    Symbol_58 = new QLineEdit;
    this->setCellWidget(0,2,Symbol_0);
    this->setCellWidget(1,2,Symbol_1);
    this->setCellWidget(2,2,Symbol_2);
    this->setCellWidget(3,2,Symbol_3);
    this->setCellWidget(4,2,Symbol_4);
    this->setCellWidget(5,2,Symbol_5);
    this->setCellWidget(6,2,Symbol_6);
    this->setCellWidget(7,2,Symbol_7);
    this->setCellWidget(8,2,Symbol_8);
    this->setCellWidget(9,2,Symbol_9);
    this->setCellWidget(10,2,Symbol_10);
    this->setCellWidget(11,2,Symbol_11);
    this->setCellWidget(12,2,Symbol_12);
    this->setCellWidget(13,2,Symbol_13);
    this->setCellWidget(14,2,Symbol_14);
    this->setCellWidget(15,2,Symbol_15);
    this->setCellWidget(16,2,Symbol_16);
    this->setCellWidget(17,2,Symbol_17);
    this->setCellWidget(18,2,Symbol_18);
    this->setCellWidget(19,2,Symbol_19);
    this->setCellWidget(20,2,Symbol_20);
    this->setCellWidget(21,2,Symbol_21);
    this->setCellWidget(22,2,Symbol_22);
    this->setCellWidget(23,2,Symbol_23);
    this->setCellWidget(24,2,Symbol_24);
    this->setCellWidget(25,2,Symbol_25);
    this->setCellWidget(26,2,Symbol_26);
    this->setCellWidget(27,2,Symbol_27);
    this->setCellWidget(28,2,Symbol_28);
    this->setCellWidget(29,2,Symbol_29);
    this->setCellWidget(30,2,Symbol_30);
    this->setCellWidget(31,2,Symbol_31);
    this->setCellWidget(32,2,Symbol_32);
    this->setCellWidget(33,2,Symbol_33);
    this->setCellWidget(34,2,Symbol_34);
    this->setCellWidget(35,2,Symbol_35);
    this->setCellWidget(36,2,Symbol_36);
    this->setCellWidget(37,2,Symbol_37);
    this->setCellWidget(38,2,Symbol_38);
    this->setCellWidget(39,2,Symbol_39);
    this->setCellWidget(40,2,Symbol_40);
    this->setCellWidget(41,2,Symbol_41);
    this->setCellWidget(42,2,Symbol_42);
    this->setCellWidget(43,2,Symbol_43);
    this->setCellWidget(44,2,Symbol_44);
    this->setCellWidget(45,2,Symbol_45);
    this->setCellWidget(46,2,Symbol_46);
    this->setCellWidget(47,2,Symbol_47);
    this->setCellWidget(48,2,Symbol_48);
    this->setCellWidget(49,2,Symbol_49);
    this->setCellWidget(50,2,Symbol_50);
    this->setCellWidget(51,2,Symbol_51);
    this->setCellWidget(52,2,Symbol_52);
    this->setCellWidget(53,2,Symbol_53);
    this->setCellWidget(54,2,Symbol_54);
    this->setCellWidget(55,2,Symbol_55);
    this->setCellWidget(56,2,Symbol_56);
    this->setCellWidget(57,2,Symbol_57);
    this->setCellWidget(58,2,Symbol_58);


    QPushButton* Button_0 = new QPushButton (tr("資料載入"));
    QPushButton* Button_1 = new QPushButton (tr("資料載入"));
    QPushButton* Button_2 = new QPushButton (tr("資料載入"));
    QPushButton* Button_3 = new QPushButton (tr("資料載入"));
    QPushButton* Button_4 = new QPushButton (tr("資料載入"));
    QPushButton* Button_5 = new QPushButton (tr("資料載入"));
    QPushButton* Button_6 = new QPushButton (tr("資料載入"));
    QPushButton* Button_7 = new QPushButton (tr("資料載入"));
    QPushButton* Button_8 = new QPushButton (tr("資料載入"));
    QPushButton* Button_9 = new QPushButton (tr("資料載入"));
    QPushButton* Button_10 = new QPushButton (tr("資料載入"));
    QPushButton* Button_11 = new QPushButton (tr("資料載入"));
    QPushButton* Button_12 = new QPushButton (tr("資料載入"));
    QPushButton* Button_13 = new QPushButton (tr("資料載入"));
    QPushButton* Button_14 = new QPushButton (tr("資料載入"));
    QPushButton* Button_15 = new QPushButton (tr("資料載入"));
    QPushButton* Button_16 = new QPushButton (tr("資料載入"));
    QPushButton* Button_17 = new QPushButton (tr("資料載入"));
    QPushButton* Button_18 = new QPushButton (tr("資料載入"));
    QPushButton* Button_19 = new QPushButton (tr("資料載入"));
    QPushButton* Button_20 = new QPushButton (tr("資料載入"));
    QPushButton* Button_21 = new QPushButton (tr("資料載入"));
    QPushButton* Button_22 = new QPushButton (tr("資料載入"));
    QPushButton* Button_23 = new QPushButton (tr("資料載入"));
    QPushButton* Button_24 = new QPushButton (tr("資料載入"));
    QPushButton* Button_25 = new QPushButton (tr("資料載入"));
    QPushButton* Button_26 = new QPushButton (tr("資料載入"));
    QPushButton* Button_27 = new QPushButton (tr("資料載入"));
    QPushButton* Button_28 = new QPushButton (tr("資料載入"));
    QPushButton* Button_29 = new QPushButton (tr("資料載入"));
    QPushButton* Button_30 = new QPushButton (tr("資料載入"));
    QPushButton* Button_31 = new QPushButton (tr("資料載入"));
    QPushButton* Button_32 = new QPushButton (tr("資料載入"));
    QPushButton* Button_33 = new QPushButton (tr("資料載入"));
    QPushButton* Button_34 = new QPushButton (tr("資料載入"));
    QPushButton* Button_35 = new QPushButton (tr("資料載入"));
    QPushButton* Button_36 = new QPushButton (tr("資料載入"));
    QPushButton* Button_37 = new QPushButton (tr("資料載入"));
    QPushButton* Button_38 = new QPushButton (tr("資料載入"));
    QPushButton* Button_39 = new QPushButton (tr("資料載入"));
    QPushButton* Button_40 = new QPushButton (tr("資料載入"));
    QPushButton* Button_41 = new QPushButton (tr("資料載入"));
    QPushButton* Button_42 = new QPushButton (tr("資料載入"));
    QPushButton* Button_43 = new QPushButton (tr("資料載入"));
    QPushButton* Button_44 = new QPushButton (tr("資料載入"));
    QPushButton* Button_45 = new QPushButton (tr("資料載入"));
    QPushButton* Button_46 = new QPushButton (tr("資料載入"));
    QPushButton* Button_47 = new QPushButton (tr("資料載入"));
    QPushButton* Button_48 = new QPushButton (tr("資料載入"));
    QPushButton* Button_49 = new QPushButton (tr("資料載入"));
    QPushButton* Button_50 = new QPushButton (tr("資料載入"));
    QPushButton* Button_51 = new QPushButton (tr("資料載入"));
    QPushButton* Button_52 = new QPushButton (tr("資料載入"));
    QPushButton* Button_53 = new QPushButton (tr("資料載入"));
    QPushButton* Button_54 = new QPushButton (tr("資料載入"));
    QPushButton* Button_55 = new QPushButton (tr("資料載入"));
    QPushButton* Button_56 = new QPushButton (tr("資料載入"));
    QPushButton* Button_57 = new QPushButton (tr("資料載入"));
    QPushButton* Button_58 = new QPushButton (tr("資料載入"));
    this->setCellWidget(0,3,Button_0);
    this->setCellWidget(1,3,Button_1);
    this->setCellWidget(2,3,Button_2);
    this->setCellWidget(3,3,Button_3);
    this->setCellWidget(4,3,Button_4);
    this->setCellWidget(5,3,Button_5);
    this->setCellWidget(6,3,Button_6);
    this->setCellWidget(7,3,Button_7);
    this->setCellWidget(8,3,Button_8);
    this->setCellWidget(9,3,Button_9);
    this->setCellWidget(10,3,Button_10);
    this->setCellWidget(11,3,Button_11);
    this->setCellWidget(12,3,Button_12);
    this->setCellWidget(13,3,Button_13);
    this->setCellWidget(14,3,Button_14);
    this->setCellWidget(15,3,Button_15);
    this->setCellWidget(16,3,Button_16);
    this->setCellWidget(17,3,Button_17);
    this->setCellWidget(18,3,Button_18);
    this->setCellWidget(19,3,Button_19);
    this->setCellWidget(20,3,Button_20);
    this->setCellWidget(21,3,Button_21);
    this->setCellWidget(22,3,Button_22);
    this->setCellWidget(23,3,Button_23);
    this->setCellWidget(24,3,Button_24);
    this->setCellWidget(25,3,Button_25);
    this->setCellWidget(26,3,Button_26);
    this->setCellWidget(27,3,Button_27);
    this->setCellWidget(28,3,Button_28);
    this->setCellWidget(29,3,Button_29);
    this->setCellWidget(30,3,Button_30);
    this->setCellWidget(31,3,Button_31);
    this->setCellWidget(32,3,Button_32);
    this->setCellWidget(33,3,Button_33);
    this->setCellWidget(34,3,Button_34);
    this->setCellWidget(35,3,Button_35);
    this->setCellWidget(36,3,Button_36);
    this->setCellWidget(37,3,Button_37);
    this->setCellWidget(38,3,Button_38);
    this->setCellWidget(39,3,Button_39);
    this->setCellWidget(40,3,Button_40);
    this->setCellWidget(41,3,Button_41);
    this->setCellWidget(42,3,Button_42);
    this->setCellWidget(43,3,Button_43);
    this->setCellWidget(44,3,Button_44);
    this->setCellWidget(45,3,Button_45);
    this->setCellWidget(46,3,Button_46);
    this->setCellWidget(47,3,Button_47);
    this->setCellWidget(48,3,Button_48);
    this->setCellWidget(49,3,Button_49);
    this->setCellWidget(50,3,Button_50);
    this->setCellWidget(51,3,Button_51);
    this->setCellWidget(52,3,Button_52);
    this->setCellWidget(53,3,Button_53);
    this->setCellWidget(54,3,Button_54);
    this->setCellWidget(55,3,Button_55);
    this->setCellWidget(56,3,Button_56);
    this->setCellWidget(57,3,Button_57);
    this->setCellWidget(58,3,Button_58);


    connect(Button_0, SIGNAL(clicked()), this, SLOT(slot_GetDate_0()));
    connect(Button_1, SIGNAL(clicked()), this, SLOT(slot_GetDate_1()));
    connect(Button_2, SIGNAL(clicked()), this, SLOT(slot_GetDate_2()));
    connect(Button_3, SIGNAL(clicked()), this, SLOT(slot_GetDate_3()));
    connect(Button_4, SIGNAL(clicked()), this, SLOT(slot_GetDate_4()));
    connect(Button_5, SIGNAL(clicked()), this, SLOT(slot_GetDate_5()));
    connect(Button_6, SIGNAL(clicked()), this, SLOT(slot_GetDate_6()));
    connect(Button_7, SIGNAL(clicked()), this, SLOT(slot_GetDate_7()));
    connect(Button_8, SIGNAL(clicked()), this, SLOT(slot_GetDate_8()));
    connect(Button_9, SIGNAL(clicked()), this, SLOT(slot_GetDate_9()));
    connect(Button_10, SIGNAL(clicked()), this, SLOT(slot_GetDate_10()));
    connect(Button_11, SIGNAL(clicked()), this, SLOT(slot_GetDate_11()));
    connect(Button_12, SIGNAL(clicked()), this, SLOT(slot_GetDate_12()));
    connect(Button_13, SIGNAL(clicked()), this, SLOT(slot_GetDate_13()));
    connect(Button_14, SIGNAL(clicked()), this, SLOT(slot_GetDate_14()));
    connect(Button_15, SIGNAL(clicked()), this, SLOT(slot_GetDate_15()));
    connect(Button_16, SIGNAL(clicked()), this, SLOT(slot_GetDate_16()));
    connect(Button_17, SIGNAL(clicked()), this, SLOT(slot_GetDate_17()));
    connect(Button_18, SIGNAL(clicked()), this, SLOT(slot_GetDate_18()));
    connect(Button_19, SIGNAL(clicked()), this, SLOT(slot_GetDate_19()));
    connect(Button_20, SIGNAL(clicked()), this, SLOT(slot_GetDate_20()));
    connect(Button_21, SIGNAL(clicked()), this, SLOT(slot_GetDate_21()));
    connect(Button_22, SIGNAL(clicked()), this, SLOT(slot_GetDate_22()));
    connect(Button_23, SIGNAL(clicked()), this, SLOT(slot_GetDate_23()));
    connect(Button_24, SIGNAL(clicked()), this, SLOT(slot_GetDate_24()));
    connect(Button_25, SIGNAL(clicked()), this, SLOT(slot_GetDate_25()));
    connect(Button_26, SIGNAL(clicked()), this, SLOT(slot_GetDate_26()));
    connect(Button_27, SIGNAL(clicked()), this, SLOT(slot_GetDate_27()));
    connect(Button_28, SIGNAL(clicked()), this, SLOT(slot_GetDate_28()));
    connect(Button_29, SIGNAL(clicked()), this, SLOT(slot_GetDate_29()));
    connect(Button_30, SIGNAL(clicked()), this, SLOT(slot_GetDate_30()));
    connect(Button_31, SIGNAL(clicked()), this, SLOT(slot_GetDate_31()));
    connect(Button_32, SIGNAL(clicked()), this, SLOT(slot_GetDate_32()));
    connect(Button_33, SIGNAL(clicked()), this, SLOT(slot_GetDate_33()));
    connect(Button_34, SIGNAL(clicked()), this, SLOT(slot_GetDate_34()));
    connect(Button_35, SIGNAL(clicked()), this, SLOT(slot_GetDate_35()));
    connect(Button_36, SIGNAL(clicked()), this, SLOT(slot_GetDate_36()));
    connect(Button_37, SIGNAL(clicked()), this, SLOT(slot_GetDate_37()));
    connect(Button_38, SIGNAL(clicked()), this, SLOT(slot_GetDate_38()));
    connect(Button_39, SIGNAL(clicked()), this, SLOT(slot_GetDate_39()));
    connect(Button_40, SIGNAL(clicked()), this, SLOT(slot_GetDate_40()));
    connect(Button_41, SIGNAL(clicked()), this, SLOT(slot_GetDate_41()));
    connect(Button_42, SIGNAL(clicked()), this, SLOT(slot_GetDate_42()));
    connect(Button_43, SIGNAL(clicked()), this, SLOT(slot_GetDate_43()));
    connect(Button_44, SIGNAL(clicked()), this, SLOT(slot_GetDate_44()));
    connect(Button_45, SIGNAL(clicked()), this, SLOT(slot_GetDate_45()));
    connect(Button_46, SIGNAL(clicked()), this, SLOT(slot_GetDate_46()));
    connect(Button_47, SIGNAL(clicked()), this, SLOT(slot_GetDate_47()));
    connect(Button_48, SIGNAL(clicked()), this, SLOT(slot_GetDate_48()));
    connect(Button_49, SIGNAL(clicked()), this, SLOT(slot_GetDate_49()));
    connect(Button_50, SIGNAL(clicked()), this, SLOT(slot_GetDate_50()));
    connect(Button_51, SIGNAL(clicked()), this, SLOT(slot_GetDate_51()));
    connect(Button_52, SIGNAL(clicked()), this, SLOT(slot_GetDate_52()));
    connect(Button_53, SIGNAL(clicked()), this, SLOT(slot_GetDate_53()));
    connect(Button_54, SIGNAL(clicked()), this, SLOT(slot_GetDate_54()));
    connect(Button_55, SIGNAL(clicked()), this, SLOT(slot_GetDate_55()));
    connect(Button_56, SIGNAL(clicked()), this, SLOT(slot_GetDate_56()));
    connect(Button_57, SIGNAL(clicked()), this, SLOT(slot_GetDate_57()));
    connect(Button_58, SIGNAL(clicked()), this, SLOT(slot_GetDate_58()));
}

void YahooDownloadWidget::slot_GetDate_0()
{
    QString s = Symbol_0->text() + tr(".tw");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_1()
{
    QString s = Symbol_1->text() + tr(".two");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_2()
{
    QString s = Symbol_2->text() + tr(".ss");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_3()
{
    QString s = Symbol_3->text() + tr(".sz");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_4()
{
    QString s = Symbol_4->text() + tr(".ks");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_5()
{
    QString s = Symbol_5->text() + tr(".kq");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_6()
{
    QString s = Symbol_6->text() + tr(".ax");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_7()
{
    QString s = Symbol_7->text() + tr(".si");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_8()
{
    QString s = Symbol_8->text() + tr("");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_9()
{
    QString s = Symbol_9->text() + tr("");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_10()
{
    QString s = Symbol_10->text() + tr(".cbt");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_11()
{
    QString s = Symbol_11->text() + tr(".cme");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_12()
{
    QString s = Symbol_12->text() + tr("");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_13()
{
    QString s = Symbol_13->text() + tr("");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_14()
{
    QString s = Symbol_14->text() + tr(".nyb");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_15()
{
    QString s = Symbol_15->text() + tr(".cmx");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_16()
{
    QString s = Symbol_16->text() + tr(".nym");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_17()
{
    QString s = Symbol_17->text() + tr("");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_18()
{
    QString s = Symbol_18->text() + tr(".ob");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_19()
{
    QString s = Symbol_19->text() + tr(".pk");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_20()
{
    QString s = Symbol_20->text() + tr("");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_21()
{
    QString s = Symbol_21->text() + tr(".ba");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_22()
{
    QString s = Symbol_22->text() + tr(".vi");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_23()
{
    QString s = Symbol_23->text() + tr(".sa");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_24()
{
    QString s = Symbol_24->text() + tr(".tq");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_25()
{
    QString s = Symbol_25->text() + tr(".v");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_26()
{
    QString s = Symbol_26->text() + tr(".sn");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_27()
{
    QString s = Symbol_27->text() + tr(".co");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_28()
{
    QString s = Symbol_28->text() + tr(".nx");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_29()
{
    QString s = Symbol_29->text() + tr(".pa");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_30()
{
    QString s = Symbol_30->text() + tr(".be");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_31()
{
    QString s = Symbol_31->text() + tr(".bm");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_32()
{
    QString s = Symbol_32->text() + tr(".du");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_33()
{
    QString s = Symbol_33->text() + tr(".f");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_34()
{
    QString s = Symbol_34->text() + tr(".hm");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_35()
{
    QString s = Symbol_35->text() + tr(".ha");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_36()
{
    QString s = Symbol_36->text() + tr(".mu");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_37()
{
    QString s = Symbol_37->text() + tr(".sg");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_38()
{
    QString s = Symbol_38->text() + tr(".de");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_39()
{
    QString s = Symbol_39->text() + tr(".hk");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_40()
{
    QString s = Symbol_40->text() + tr(".bo");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_41()
{
    QString s = Symbol_41->text() + tr(".ns");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_42()
{
    QString s = Symbol_42->text() + tr(".jk");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_43()
{
    QString s = Symbol_43->text() + tr(".ta");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_44()
{
    QString s = Symbol_44->text() + tr(".mj");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_45()
{
    QString s = Symbol_45->text() + tr("");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_46()
{
    QString s = Symbol_46->text() + tr(".mx");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_47()
{
    QString s = Symbol_47->text() + tr(".as");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_48()
{
    QString s = Symbol_48->text() + tr(".nz");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_49()
{
    QString s = Symbol_49->text() + tr(".ol");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_50()
{
    QString s = Symbol_50->text() + tr(".bc");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_51()
{
    QString s = Symbol_51->text() + tr(".bi");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_52()
{
    QString s = Symbol_52->text() + tr(".mf");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_53()
{
    QString s = Symbol_53->text() + tr(".mc");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_54()
{
    QString s = Symbol_54->text() + tr(".ma");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_55()
{
    QString s = Symbol_55->text() + tr(".st");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_56()
{
    QString s = Symbol_56->text() + tr(".sw");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_57()
{
    QString s = Symbol_57->text() + tr("");
    YahooDownload* DownloadObject = new YahooDownload(s);
}

void YahooDownloadWidget::slot_GetDate_58()
{
    QString s = Symbol_58->text() + tr(".l");
    YahooDownload* DownloadObject = new YahooDownload(s);
}
