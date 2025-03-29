/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *LeftMenuContainer;
    QVBoxLayout *verticalLayout_6;
    QWidget *LeftMenuSubContainer;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *AppTitle;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *TablesBtn;
    QPushButton *MenuBtn;
    QPushButton *OrdersBtn;
    QPushButton *BillingBtn;
    QPushButton *ReservationsBtn;
    QPushButton *InventoryBtn;
    QPushButton *LogoutBtn;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QWidget *MainBodyContainer;
    QVBoxLayout *verticalLayout_2;
    QWidget *HeaderContainer;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *AppTitle_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *MaximumBtn;
    QPushButton *CrossBtn;
    QStackedWidget *stackedWidget;
    QWidget *Tables;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_11;
    QComboBox *Table1_Status_3;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QComboBox *Table1_Status;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
    QComboBox *Table1_Status_2;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_12;
    QComboBox *Table1_Status_4;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_14;
    QComboBox *Table1_Status_6;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_15;
    QComboBox *Table1_Status_7;
    QWidget *widget_3;
    QWidget *Menu;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_4;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_5;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_16;
    QWidget *Orders;
    QLabel *label_6;
    QWidget *Billing;
    QLabel *label_7;
    QWidget *Reservations;
    QLabel *label_9;
    QWidget *Inventory;
    QLabel *label_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1014, 611);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("* {\n"
"    border: none;\n"
"    background-color: transparent;\n"
"    background: none;\n"
"    padding: 0;\n"
"    margin: 0;\n"
"}\n"
"\n"
"#centralwidget {\n"
"    background-color: #FAFAFA; /* Light gray for the main background */\n"
"}\n"
"\n"
"#LeftMenuContainer {\n"
"    background-color: #F5F5F5; /* Slightly darker light gray for the sidebar */\n"
"}\n"
"\n"
" QPushButton {\n"
"    background-color: #E8F0FE;  /* Light blue for buttons */\n"
"    color: #333333;            /* Dark gray text for readability */\n"
"    border: none;\n"
"    border-radius: 8px;        /* Rounded corners */\n"
"    padding: 12px 20px;        /* Balanced padding */\n"
"    font-size: 15px;           /* Medium font size for modern feel */\n"
"    font-weight: bold;         /* Emphasized text */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #D7E6FD; /* Softer blue when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C6D9FB; /* Slightly darker blue when pressed */\n"
"    color: #1A1"
                        "A1A;            /* Darker text for contrast */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #F0F0F0; /* Muted gray for disabled buttons */\n"
"    color: #A8A8A8;            /* Muted text color */\n"
"}\n"
"\n"
"QLineEdit {\n"
"    border: 2px solid green; /* Border color */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px; /* Internal padding for text */\n"
"    background-color: white; /* Background color */\n"
"    color: black; /* Text color */\n"
"    font: bold 12px; /* Font style and size */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #32CD32; /* Bright green border on focus */\n"
"    background-color: white; \n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    border: 2px solid darkgreen; /* Border color on hover */\n"
"    background-color: #E6FFE6; /* Light hover effect */\n"
"}\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        LeftMenuContainer = new QWidget(centralwidget);
        LeftMenuContainer->setObjectName("LeftMenuContainer");
        verticalLayout_6 = new QVBoxLayout(LeftMenuContainer);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 10, 0, 0);
        LeftMenuSubContainer = new QWidget(LeftMenuContainer);
        LeftMenuSubContainer->setObjectName("LeftMenuSubContainer");
        verticalLayout_7 = new QVBoxLayout(LeftMenuSubContainer);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(12, 12, 12, -1);
        frame = new QFrame(LeftMenuSubContainer);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(65, 60));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/Icons/restaurant-cutlery-circular-symbol-of-a-spoon-and-a-fork-in-a-circle.svg")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        AppTitle = new QLabel(frame);
        AppTitle->setObjectName("AppTitle");
        AppTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 15px;           /* Large font size for the title */\n"
"    font-weight: bold;         /* Bold text for emphasis */\n"
"    color:#010101;            /* A fresh black color for the title */\n"
"    background: transparent;   /* No background for a clean look */\n"
"    text-align: center;        /* Centered alignment */\n"
"    padding: 10px 0;           /* Padding for spacing */\n"
"    border-radius: 8px;        /* Rounded corners */\n"
"}\n"
""));
        AppTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(AppTitle);


        verticalLayout_7->addWidget(frame, 0, Qt::AlignmentFlag::AlignTop);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_7->addItem(verticalSpacer_2);

        frame_2 = new QFrame(LeftMenuSubContainer);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        TablesBtn = new QPushButton(frame_2);
        TablesBtn->setObjectName("TablesBtn");
        QFont font;
        font.setFamilies({QString::fromUtf8("Gandhara Suls")});
        font.setBold(true);
        TablesBtn->setFont(font);
        TablesBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Icons/table.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TablesBtn->setIcon(icon);
        TablesBtn->setIconSize(QSize(24, 24));

        verticalLayout_8->addWidget(TablesBtn);

        MenuBtn = new QPushButton(frame_2);
        MenuBtn->setObjectName("MenuBtn");
        MenuBtn->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MenuBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Icons/menu.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MenuBtn->setIcon(icon1);
        MenuBtn->setIconSize(QSize(24, 24));

        verticalLayout_8->addWidget(MenuBtn);

        OrdersBtn = new QPushButton(frame_2);
        OrdersBtn->setObjectName("OrdersBtn");
        OrdersBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Icons/checklist.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        OrdersBtn->setIcon(icon2);
        OrdersBtn->setIconSize(QSize(24, 24));

        verticalLayout_8->addWidget(OrdersBtn);

        BillingBtn = new QPushButton(frame_2);
        BillingBtn->setObjectName("BillingBtn");
        BillingBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Icons/bill.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BillingBtn->setIcon(icon3);
        BillingBtn->setIconSize(QSize(24, 24));

        verticalLayout_8->addWidget(BillingBtn);

        ReservationsBtn = new QPushButton(frame_2);
        ReservationsBtn->setObjectName("ReservationsBtn");
        ReservationsBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/Icons/booking.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ReservationsBtn->setIcon(icon4);
        ReservationsBtn->setIconSize(QSize(24, 24));

        verticalLayout_8->addWidget(ReservationsBtn);

        InventoryBtn = new QPushButton(frame_2);
        InventoryBtn->setObjectName("InventoryBtn");
        InventoryBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Icons/box.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        InventoryBtn->setIcon(icon5);
        InventoryBtn->setIconSize(QSize(24, 24));

        verticalLayout_8->addWidget(InventoryBtn);

        LogoutBtn = new QPushButton(frame_2);
        LogoutBtn->setObjectName("LogoutBtn");
        LogoutBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/Icons/logout.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LogoutBtn->setIcon(icon6);
        LogoutBtn->setIconSize(QSize(24, 24));

        verticalLayout_8->addWidget(LogoutBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(76, 76, 76);"));

        verticalLayout_8->addWidget(label_3, 0, Qt::AlignmentFlag::AlignHCenter);


        verticalLayout_7->addWidget(frame_2);


        verticalLayout_6->addWidget(LeftMenuSubContainer, 0, Qt::AlignmentFlag::AlignLeft);


        horizontalLayout_3->addWidget(LeftMenuContainer);

        MainBodyContainer = new QWidget(centralwidget);
        MainBodyContainer->setObjectName("MainBodyContainer");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(150);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(MainBodyContainer->sizePolicy().hasHeightForWidth());
        MainBodyContainer->setSizePolicy(sizePolicy3);
        MainBodyContainer->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(6);
        MainBodyContainer->setFont(font1);
        MainBodyContainer->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(MainBodyContainer);
        verticalLayout_2->setObjectName("verticalLayout_2");
        HeaderContainer = new QWidget(MainBodyContainer);
        HeaderContainer->setObjectName("HeaderContainer");
        HeaderContainer->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(HeaderContainer);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(HeaderContainer);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/Icons/home.svg")));

        horizontalLayout_4->addWidget(label_2);

        AppTitle_2 = new QLabel(frame_3);
        AppTitle_2->setObjectName("AppTitle_2");
        QFont font2;
        font2.setBold(true);
        AppTitle_2->setFont(font2);
        AppTitle_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 20px;           /* Large font size for the title */\n"
"    font-weight: bold;         /* Bold text for emphasis */\n"
"    color:#010101;            /* A fresh black color for the title */\n"
"    background: transparent;   /* No background for a clean look */\n"
"    text-align: center;        /* Centered alignment */\n"
"}\n"
""));
        AppTitle_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(AppTitle_2);


        horizontalLayout_2->addWidget(frame_3, 0, Qt::AlignmentFlag::AlignLeft);

        frame_4 = new QFrame(HeaderContainer);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(frame_4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* Custom style or reset styles */\n"
"    background-color: none;\n"
"    color: black;\n"
"    border: none;\n"
"   padding: 0px;\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/Icons/minimize-sign.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon7);

        horizontalLayout->addWidget(pushButton_3);

        MaximumBtn = new QPushButton(frame_4);
        MaximumBtn->setObjectName("MaximumBtn");
        MaximumBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* Custom style or reset styles */\n"
"    background-color: none;\n"
"    color: black;\n"
"    border: none;\n"
"   padding: 0px;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/Icons/stop.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MaximumBtn->setIcon(icon8);

        horizontalLayout->addWidget(MaximumBtn);

        CrossBtn = new QPushButton(frame_4);
        CrossBtn->setObjectName("CrossBtn");
        CrossBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* Custom style or reset styles */\n"
"    background-color: none;\n"
"    color: black;\n"
"    border: none;\n"
"   padding: 0px;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/Icons/close.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CrossBtn->setIcon(icon9);

        horizontalLayout->addWidget(CrossBtn);


        horizontalLayout_2->addWidget(frame_4, 0, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTop);


        verticalLayout_2->addWidget(HeaderContainer, 0, Qt::AlignmentFlag::AlignTop);

        stackedWidget = new QStackedWidget(MainBodyContainer);
        stackedWidget->setObjectName("stackedWidget");
        Tables = new QWidget();
        Tables->setObjectName("Tables");
        verticalLayout_3 = new QVBoxLayout(Tables);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget = new QWidget(Tables);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        frame_7 = new QFrame(widget);
        frame_7->setObjectName("frame_7");
        frame_7->setStyleSheet(QString::fromUtf8("background-color: #E8F0FE;\n"
"border-radius: 10px;"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_7);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_11 = new QLabel(frame_7);
        label_11->setObjectName("label_11");
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Franklin Gothic")});
        font3.setPointSize(12);
        label_11->setFont(font3);
        label_11->setAutoFillBackground(false);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(label_11);

        Table1_Status_3 = new QComboBox(frame_7);
        Table1_Status_3->addItem(QString());
        Table1_Status_3->addItem(QString());
        Table1_Status_3->addItem(QString());
        Table1_Status_3->setObjectName("Table1_Status_3");
        Table1_Status_3->setFont(font3);
        Table1_Status_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Table1_Status_3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border-radius: 5px;\n"
"    padding: 7px;\n"
"    color: white;\n"
"    background-color: green;\n"
"    text-align: center; /* Center-align the text */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: darkgreen;\n"
"    background-color: #32CD32; /* Lighter green for hover effect */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px; /* Adjust width of the dropdown button */\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white;\n"
"    color: black;\n"
"    selection-background-color: #32CD32; /* Highlight selected item in green */\n"
"    selection-color: black;\n"
"    padding: 5px;\n"
"    text-align: center;\n"
"    outline: none; /* Remove focus border for cleaner look */\n"
"}\n"
""));
        Table1_Status_3->setIconSize(QSize(0, 0));
        Table1_Status_3->setFrame(true);

        verticalLayout_9->addWidget(Table1_Status_3);


        gridLayout->addWidget(frame_7, 1, 2, 1, 1);

        frame_5 = new QFrame(widget);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("background-color: #E8F0FE;\n"
"border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(frame_5);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font3);
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        Table1_Status = new QComboBox(frame_5);
        Table1_Status->addItem(QString());
        Table1_Status->addItem(QString());
        Table1_Status->addItem(QString());
        Table1_Status->setObjectName("Table1_Status");
        Table1_Status->setFont(font3);
        Table1_Status->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Table1_Status->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border-radius: 5px;\n"
"    padding: 7px;\n"
"    color: white;\n"
"    background-color: green;\n"
"    text-align: center; /* Center-align the text */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: darkgreen;\n"
"    background-color: #32CD32; /* Lighter green for hover effect */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px; /* Adjust width of the dropdown button */\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white;\n"
"    color: black;\n"
"    selection-background-color: #32CD32; /* Highlight selected item in green */\n"
"    selection-color: black;\n"
"    padding: 5px;\n"
"    text-align: center;\n"
"    outline: none; /* Remove focus border for cleaner look */\n"
"}\n"
""));
        Table1_Status->setIconSize(QSize(0, 0));
        Table1_Status->setFrame(true);

        verticalLayout_4->addWidget(Table1_Status);


        gridLayout->addWidget(frame_5, 1, 0, 1, 1);

        frame_6 = new QFrame(widget);
        frame_6->setObjectName("frame_6");
        frame_6->setStyleSheet(QString::fromUtf8("background-color: #E8F0FE;\n"
"border-radius: 10px;"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_10 = new QLabel(frame_6);
        label_10->setObjectName("label_10");
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setFont(font3);
        label_10->setAutoFillBackground(false);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_10);

        Table1_Status_2 = new QComboBox(frame_6);
        Table1_Status_2->addItem(QString());
        Table1_Status_2->addItem(QString());
        Table1_Status_2->addItem(QString());
        Table1_Status_2->setObjectName("Table1_Status_2");
        Table1_Status_2->setFont(font3);
        Table1_Status_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Table1_Status_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border-radius: 5px;\n"
"    padding: 7px;\n"
"    color: white;\n"
"    background-color: green;\n"
"    text-align: center; /* Center-align the text */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: darkgreen;\n"
"    background-color: #32CD32; /* Lighter green for hover effect */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px; /* Adjust width of the dropdown button */\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white;\n"
"    color: black;\n"
"    selection-background-color: #32CD32; /* Highlight selected item in green */\n"
"    selection-color: black;\n"
"    padding: 5px;\n"
"    text-align: center;\n"
"    outline: none; /* Remove focus border for cleaner look */\n"
"}\n"
""));
        Table1_Status_2->setIconSize(QSize(0, 0));
        Table1_Status_2->setFrame(true);

        verticalLayout_5->addWidget(Table1_Status_2);


        gridLayout->addWidget(frame_6, 1, 1, 1, 1);

        frame_8 = new QFrame(widget);
        frame_8->setObjectName("frame_8");
        frame_8->setStyleSheet(QString::fromUtf8("background-color: #E8F0FE;\n"
"border-radius: 10px;"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_8);
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_12 = new QLabel(frame_8);
        label_12->setObjectName("label_12");
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setFont(font3);
        label_12->setAutoFillBackground(false);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(label_12);

        Table1_Status_4 = new QComboBox(frame_8);
        Table1_Status_4->addItem(QString());
        Table1_Status_4->addItem(QString());
        Table1_Status_4->addItem(QString());
        Table1_Status_4->setObjectName("Table1_Status_4");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Table1_Status_4->sizePolicy().hasHeightForWidth());
        Table1_Status_4->setSizePolicy(sizePolicy4);
        Table1_Status_4->setFont(font3);
        Table1_Status_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Table1_Status_4->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border-radius: 5px;\n"
"    padding: 7px;\n"
"    color: white;\n"
"    background-color: green;\n"
"    text-align: center; /* Center-align the text */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: darkgreen;\n"
"    background-color: #32CD32; /* Lighter green for hover effect */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px; /* Adjust width of the dropdown button */\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white;\n"
"    color: black;\n"
"    selection-background-color: #32CD32; /* Highlight selected item in green */\n"
"    selection-color: black;\n"
"    padding: 5px;\n"
"    text-align: center;\n"
"    outline: none; /* Remove focus border for cleaner look */\n"
"}\n"
""));
        Table1_Status_4->setIconSize(QSize(0, 0));
        Table1_Status_4->setFrame(true);

        verticalLayout_10->addWidget(Table1_Status_4);


        gridLayout->addWidget(frame_8, 0, 0, 1, 1);

        frame_9 = new QFrame(widget);
        frame_9->setObjectName("frame_9");
        frame_9->setStyleSheet(QString::fromUtf8("background-color: #E8F0FE;\n"
"border-radius: 10px;"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_9);
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_14 = new QLabel(frame_9);
        label_14->setObjectName("label_14");
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setFont(font3);
        label_14->setAutoFillBackground(false);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_12->addWidget(label_14);

        Table1_Status_6 = new QComboBox(frame_9);
        Table1_Status_6->addItem(QString());
        Table1_Status_6->addItem(QString());
        Table1_Status_6->addItem(QString());
        Table1_Status_6->setObjectName("Table1_Status_6");
        Table1_Status_6->setFont(font3);
        Table1_Status_6->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Table1_Status_6->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border-radius: 5px;\n"
"    padding: 7px;\n"
"    color: white;\n"
"    background-color: green;\n"
"    text-align: center; /* Center-align the text */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: darkgreen;\n"
"    background-color: #32CD32; /* Lighter green for hover effect */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px; /* Adjust width of the dropdown button */\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white;\n"
"    color: black;\n"
"    selection-background-color: #32CD32; /* Highlight selected item in green */\n"
"    selection-color: black;\n"
"    padding: 5px;\n"
"    text-align: center;\n"
"    outline: none; /* Remove focus border for cleaner look */\n"
"}\n"
""));
        Table1_Status_6->setIconSize(QSize(0, 0));
        Table1_Status_6->setFrame(true);

        verticalLayout_12->addWidget(Table1_Status_6);


        gridLayout->addWidget(frame_9, 0, 1, 1, 1);

        frame_10 = new QFrame(widget);
        frame_10->setObjectName("frame_10");
        frame_10->setStyleSheet(QString::fromUtf8("background-color: #E8F0FE;\n"
"border-radius: 10px;"));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_13 = new QVBoxLayout(frame_10);
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_15 = new QLabel(frame_10);
        label_15->setObjectName("label_15");
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setFont(font3);
        label_15->setAutoFillBackground(false);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(label_15);

        Table1_Status_7 = new QComboBox(frame_10);
        Table1_Status_7->addItem(QString());
        Table1_Status_7->addItem(QString());
        Table1_Status_7->addItem(QString());
        Table1_Status_7->setObjectName("Table1_Status_7");
        Table1_Status_7->setFont(font3);
        Table1_Status_7->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Table1_Status_7->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border-radius: 5px;\n"
"    padding: 7px;\n"
"    color: white;\n"
"    background-color: green;\n"
"    text-align: center; /* Center-align the text */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: darkgreen;\n"
"    background-color: #32CD32; /* Lighter green for hover effect */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px; /* Adjust width of the dropdown button */\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white;\n"
"    color: black;\n"
"    selection-background-color: #32CD32; /* Highlight selected item in green */\n"
"    selection-color: black;\n"
"    padding: 5px;\n"
"    text-align: center;\n"
"    outline: none; /* Remove focus border for cleaner look */\n"
"}\n"
""));
        Table1_Status_7->setIconSize(QSize(0, 0));
        Table1_Status_7->setFrame(true);

        verticalLayout_13->addWidget(Table1_Status_7);


        gridLayout->addWidget(frame_10, 0, 2, 1, 1);


        verticalLayout_3->addWidget(widget);

        widget_3 = new QWidget(Tables);
        widget_3->setObjectName("widget_3");

        verticalLayout_3->addWidget(widget_3);

        stackedWidget->addWidget(Tables);
        Menu = new QWidget();
        Menu->setObjectName("Menu");
        horizontalLayout_5 = new QHBoxLayout(Menu);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        widget_4 = new QWidget(Menu);
        widget_4->setObjectName("widget_4");
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(widget_4);

        widget_2 = new QWidget(Menu);
        widget_2->setObjectName("widget_2");
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setStyleSheet(QString::fromUtf8("background-color: #E8F0FE;\n"
"border-radius: 10px;"));
        verticalLayout_11 = new QVBoxLayout(widget_2);
        verticalLayout_11->setObjectName("verticalLayout_11");
        frame_11 = new QFrame(widget_2);
        frame_11->setObjectName("frame_11");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Tahoma")});
        font4.setPointSize(14);
        font4.setBold(true);
        frame_11->setFont(font4);
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_11);
        verticalLayout_14->setObjectName("verticalLayout_14");
        label_5 = new QLabel(frame_11);
        label_5->setObjectName("label_5");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Franklin Gothic")});
        font5.setPointSize(16);
        font5.setBold(true);
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_14->addWidget(label_5, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout_11->addWidget(frame_11, 0, Qt::AlignmentFlag::AlignTop);

        frame_12 = new QFrame(widget_2);
        frame_12->setObjectName("frame_12");
        sizePolicy2.setHeightForWidth(frame_12->sizePolicy().hasHeightForWidth());
        frame_12->setSizePolicy(sizePolicy2);
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_12);
        verticalLayout_15->setSpacing(14);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(9, 0, 9, 0);
        lineEdit = new QLineEdit(frame_12);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_15->addWidget(lineEdit);

        textEdit = new QTextEdit(frame_12);
        textEdit->setObjectName("textEdit");
        textEdit->setMaximumSize(QSize(300, 60));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: 2px solid green; /* Border color */\n"
"    border-radius: 10px; /* Rounded corners */\n"
"    padding: 5px; /* Internal padding for text */\n"
"    background-color: white; /* Background color */\n"
"    color: black; /* Text color */\n"
"    font: bold 12px; /* Font style and size */\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border: 2px solid #32CD32; /* Bright green border on focus */\n"
"    background-color: #F0FFF0; /* Light greenish background */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    border: 2px solid darkgreen; /* Border color on hover */\n"
"    background-color: #E6FFE6; /* Light hover effect */\n"
"}\n"
""));

        verticalLayout_15->addWidget(textEdit);

        lineEdit_3 = new QLineEdit(frame_12);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_15->addWidget(lineEdit_3);

        pushButton = new QPushButton(frame_12);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px; /* Rounded corners */\n"
"    padding: 7px; /* Internal padding */\n"
"    color: white; /* Text color */\n"
"    background-color: green; /* Background color */\n"
"    font: bold 12px; /* Font style and size */\n"
"    border: 2px solid green; /* Border color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #32CD32; /* Lighter green on hover */\n"
"    border-color: darkgreen; /* Dark green border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: darkgreen; /* Darker green when pressed */\n"
"    border-color: black; /* Border changes on press */\n"
"}\n"
""));

        verticalLayout_15->addWidget(pushButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_4);


        verticalLayout_11->addWidget(frame_12);

        frame_13 = new QFrame(widget_2);
        frame_13->setObjectName("frame_13");
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_16 = new QVBoxLayout(frame_13);
        verticalLayout_16->setObjectName("verticalLayout_16");

        verticalLayout_11->addWidget(frame_13, 0, Qt::AlignmentFlag::AlignBottom);


        horizontalLayout_5->addWidget(widget_2, 0, Qt::AlignmentFlag::AlignLeft);

        stackedWidget->addWidget(Menu);
        Orders = new QWidget();
        Orders->setObjectName("Orders");
        label_6 = new QLabel(Orders);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 0, 679, 521));
        QFont font6;
        font6.setPointSize(26);
        font6.setBold(true);
        label_6->setFont(font6);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(Orders);
        Billing = new QWidget();
        Billing->setObjectName("Billing");
        label_7 = new QLabel(Billing);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 0, 679, 521));
        label_7->setFont(font6);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(Billing);
        Reservations = new QWidget();
        Reservations->setObjectName("Reservations");
        label_9 = new QLabel(Reservations);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 0, 679, 521));
        label_9->setFont(font6);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(Reservations);
        Inventory = new QWidget();
        Inventory->setObjectName("Inventory");
        label_8 = new QLabel(Inventory);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 10, 679, 521));
        label_8->setFont(font6);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(Inventory);

        verticalLayout_2->addWidget(stackedWidget);


        horizontalLayout_3->addWidget(MainBodyContainer);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);
        Table1_Status_3->setCurrentIndex(-1);
        Table1_Status->setCurrentIndex(-1);
        Table1_Status_2->setCurrentIndex(-1);
        Table1_Status_4->setCurrentIndex(-1);
        Table1_Status_6->setCurrentIndex(-1);
        Table1_Status_7->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        AppTitle->setText(QCoreApplication::translate("MainWindow", "RestaurantApp", nullptr));
#if QT_CONFIG(tooltip)
        TablesBtn->setToolTip(QCoreApplication::translate("MainWindow", "Tables", nullptr));
#endif // QT_CONFIG(tooltip)
        TablesBtn->setText(QCoreApplication::translate("MainWindow", "Tables", nullptr));
#if QT_CONFIG(tooltip)
        MenuBtn->setToolTip(QCoreApplication::translate("MainWindow", "Menu", nullptr));
#endif // QT_CONFIG(tooltip)
        MenuBtn->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
#if QT_CONFIG(tooltip)
        OrdersBtn->setToolTip(QCoreApplication::translate("MainWindow", "Orders", nullptr));
#endif // QT_CONFIG(tooltip)
        OrdersBtn->setText(QCoreApplication::translate("MainWindow", "Orders", nullptr));
#if QT_CONFIG(tooltip)
        BillingBtn->setToolTip(QCoreApplication::translate("MainWindow", "Billing", nullptr));
#endif // QT_CONFIG(tooltip)
        BillingBtn->setText(QCoreApplication::translate("MainWindow", "Billing", nullptr));
#if QT_CONFIG(tooltip)
        ReservationsBtn->setToolTip(QCoreApplication::translate("MainWindow", "Reservations", nullptr));
#endif // QT_CONFIG(tooltip)
        ReservationsBtn->setText(QCoreApplication::translate("MainWindow", "Reservations", nullptr));
#if QT_CONFIG(tooltip)
        InventoryBtn->setToolTip(QCoreApplication::translate("MainWindow", "Inventory", nullptr));
#endif // QT_CONFIG(tooltip)
        InventoryBtn->setText(QCoreApplication::translate("MainWindow", "Inventory", nullptr));
#if QT_CONFIG(tooltip)
        LogoutBtn->setToolTip(QCoreApplication::translate("MainWindow", "Logout", nullptr));
#endif // QT_CONFIG(tooltip)
        LogoutBtn->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\302\251 2025 RestaurantApp.", nullptr));
        label_2->setText(QString());
        AppTitle_2->setText(QCoreApplication::translate("MainWindow", "DASHBOARD", nullptr));
        pushButton_3->setText(QString());
        MaximumBtn->setText(QString());
        CrossBtn->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "Table 6", nullptr));
        Table1_Status_3->setItemText(0, QCoreApplication::translate("MainWindow", "Available", nullptr));
        Table1_Status_3->setItemText(1, QCoreApplication::translate("MainWindow", "Occupied", nullptr));
        Table1_Status_3->setItemText(2, QCoreApplication::translate("MainWindow", "Reserved", nullptr));

        Table1_Status_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Change Status", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Table 4", nullptr));
        Table1_Status->setItemText(0, QCoreApplication::translate("MainWindow", "Available", nullptr));
        Table1_Status->setItemText(1, QCoreApplication::translate("MainWindow", "Occupied", nullptr));
        Table1_Status->setItemText(2, QCoreApplication::translate("MainWindow", "Reserved", nullptr));

        Table1_Status->setPlaceholderText(QCoreApplication::translate("MainWindow", "Change Status", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Table 5", nullptr));
        Table1_Status_2->setItemText(0, QCoreApplication::translate("MainWindow", "Available", nullptr));
        Table1_Status_2->setItemText(1, QCoreApplication::translate("MainWindow", "Occupied", nullptr));
        Table1_Status_2->setItemText(2, QCoreApplication::translate("MainWindow", "Reserved", nullptr));

        Table1_Status_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Change Status", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Table 1", nullptr));
        Table1_Status_4->setItemText(0, QCoreApplication::translate("MainWindow", "Available", nullptr));
        Table1_Status_4->setItemText(1, QCoreApplication::translate("MainWindow", "Occupied", nullptr));
        Table1_Status_4->setItemText(2, QCoreApplication::translate("MainWindow", "Reserved", nullptr));

        Table1_Status_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "Change Status", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Table 2", nullptr));
        Table1_Status_6->setItemText(0, QCoreApplication::translate("MainWindow", "Available", nullptr));
        Table1_Status_6->setItemText(1, QCoreApplication::translate("MainWindow", "Occupied", nullptr));
        Table1_Status_6->setItemText(2, QCoreApplication::translate("MainWindow", "Reserved", nullptr));

        Table1_Status_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "Change Status", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Table 3", nullptr));
        Table1_Status_7->setItemText(0, QCoreApplication::translate("MainWindow", "Available", nullptr));
        Table1_Status_7->setItemText(1, QCoreApplication::translate("MainWindow", "Occupied", nullptr));
        Table1_Status_7->setItemText(2, QCoreApplication::translate("MainWindow", "Reserved", nullptr));

        Table1_Status_7->setPlaceholderText(QCoreApplication::translate("MainWindow", "Change Status", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Add New Item", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Item Name", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add Item", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Mahad", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Mahad", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Usman", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Usman", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
