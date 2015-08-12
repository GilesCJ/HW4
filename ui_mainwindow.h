/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListWidget *old;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *male;
    QRadioButton *female;
    QPushButton *confirm;
    QLabel *label_5;
    QListWidget *howmany;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_6;
    QListWidget *firstold;
    QLabel *label_4;
    QCheckBox *check;
    QTextBrowser *mate;
    QListWidget *job;
    QTextBrowser *old2;
    QTextBrowser *job2;
    QTextBrowser *firstold2;
    QTextBrowser *howmany2;
    QProgressBar *progressBar;
    QPushButton *LOAD;
    QPushButton *SAVE;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(713, 649);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        old = new QListWidget(centralWidget);
        new QListWidgetItem(old);
        new QListWidgetItem(old);
        new QListWidgetItem(old);
        old->setObjectName(QStringLiteral("old"));
        old->setGeometry(QRect(180, 100, 181, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setItalic(false);
        old->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 80, 47, 12));
        label_3->setFont(font);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 110, 81, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        male = new QRadioButton(verticalLayoutWidget);
        male->setObjectName(QStringLiteral("male"));
        male->setFont(font);

        verticalLayout->addWidget(male);

        female = new QRadioButton(verticalLayoutWidget);
        female->setObjectName(QStringLiteral("female"));
        female->setFont(font);

        verticalLayout->addWidget(female);

        confirm = new QPushButton(centralWidget);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setEnabled(false);
        confirm->setGeometry(QRect(400, 120, 221, 41));
        confirm->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 180, 47, 12));
        label_5->setFont(font);
        howmany = new QListWidget(centralWidget);
        new QListWidgetItem(howmany);
        new QListWidgetItem(howmany);
        new QListWidgetItem(howmany);
        new QListWidgetItem(howmany);
        new QListWidgetItem(howmany);
        howmany->setObjectName(QStringLiteral("howmany"));
        howmany->setGeometry(QRect(50, 340, 131, 91));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 570, 91, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Mistral"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 10, 191, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label->setFont(font2);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 320, 61, 16));
        label_6->setFont(font);
        firstold = new QListWidget(centralWidget);
        new QListWidgetItem(firstold);
        new QListWidgetItem(firstold);
        new QListWidgetItem(firstold);
        new QListWidgetItem(firstold);
        firstold->setObjectName(QStringLiteral("firstold"));
        firstold->setGeometry(QRect(50, 200, 131, 101));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 180, 47, 12));
        label_4->setFont(font);
        check = new QCheckBox(centralWidget);
        check->setObjectName(QStringLiteral("check"));
        check->setGeometry(QRect(460, 80, 101, 31));
        check->setFont(font);
        mate = new QTextBrowser(centralWidget);
        mate->setObjectName(QStringLiteral("mate"));
        mate->setGeometry(QRect(360, 200, 41, 191));
        mate->setFont(font);
        job = new QListWidget(centralWidget);
        new QListWidgetItem(job);
        new QListWidgetItem(job);
        new QListWidgetItem(job);
        new QListWidgetItem(job);
        new QListWidgetItem(job);
        new QListWidgetItem(job);
        new QListWidgetItem(job);
        new QListWidgetItem(job);
        new QListWidgetItem(job);
        new QListWidgetItem(job);
        new QListWidgetItem(job);
        job->setObjectName(QStringLiteral("job"));
        job->setGeometry(QRect(200, 200, 131, 101));
        old2 = new QTextBrowser(centralWidget);
        old2->setObjectName(QStringLiteral("old2"));
        old2->setGeometry(QRect(400, 200, 71, 191));
        job2 = new QTextBrowser(centralWidget);
        job2->setObjectName(QStringLiteral("job2"));
        job2->setGeometry(QRect(470, 200, 61, 191));
        firstold2 = new QTextBrowser(centralWidget);
        firstold2->setObjectName(QStringLiteral("firstold2"));
        firstold2->setGeometry(QRect(530, 200, 61, 191));
        howmany2 = new QTextBrowser(centralWidget);
        howmany2->setObjectName(QStringLiteral("howmany2"));
        howmany2->setGeometry(QRect(590, 200, 71, 191));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(210, 530, 341, 21));
        progressBar->setValue(0);
        LOAD = new QPushButton(centralWidget);
        LOAD->setObjectName(QStringLiteral("LOAD"));
        LOAD->setGeometry(QRect(230, 340, 75, 23));
        SAVE = new QPushButton(centralWidget);
        SAVE->setObjectName(QStringLiteral("SAVE"));
        SAVE->setGeometry(QRect(230, 390, 75, 23));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(370, 175, 41, 21));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(420, 175, 31, 21));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(480, 175, 31, 21));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(530, 176, 47, 20));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(590, 170, 71, 31));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(50, 440, 561, 61));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 713, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));

        const bool __sortingEnabled = old->isSortingEnabled();
        old->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = old->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "15~25\346\255\262", 0));
        QListWidgetItem *___qlistwidgetitem1 = old->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "25~40\346\255\262", 0));
        QListWidgetItem *___qlistwidgetitem2 = old->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "40\346\255\262\344\273\245\344\270\212", 0));
        old->setSortingEnabled(__sortingEnabled);

        label_3->setText(QApplication::translate("MainWindow", "\347\217\276\345\234\250\345\271\264\351\275\241", 0));
        male->setText(QApplication::translate("MainWindow", "\347\224\267\347\224\237", 0));
        female->setText(QApplication::translate("MainWindow", "\345\245\263\347\224\237", 0));
        confirm->setText(QApplication::translate("MainWindow", "\347\242\272\350\252\215", 0));
        label_5->setText(QApplication::translate("MainWindow", "\350\201\267\346\245\255", 0));

        const bool __sortingEnabled1 = howmany->isSortingEnabled();
        howmany->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem3 = howmany->item(0);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "0", 0));
        QListWidgetItem *___qlistwidgetitem4 = howmany->item(1);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "1-2", 0));
        QListWidgetItem *___qlistwidgetitem5 = howmany->item(2);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "3-5", 0));
        QListWidgetItem *___qlistwidgetitem6 = howmany->item(3);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "5-7", 0));
        QListWidgetItem *___qlistwidgetitem7 = howmany->item(4);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "7\344\273\245\344\270\212", 0));
        howmany->setSortingEnabled(__sortingEnabled1);

        label_2->setText(QApplication::translate("MainWindow", "directed by JJ", 0));
        label->setText(QApplication::translate("MainWindow", "\346\203\205\345\217\262\345\244\247\350\252\277\346\237\245", 0));
        label_6->setText(QApplication::translate("MainWindow", "\344\272\244\345\276\200\351\201\216\344\272\272\346\225\270", 0));

        const bool __sortingEnabled2 = firstold->isSortingEnabled();
        firstold->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem8 = firstold->item(0);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "10~15\346\255\262", 0));
        QListWidgetItem *___qlistwidgetitem9 = firstold->item(1);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "16~22\346\255\262", 0));
        QListWidgetItem *___qlistwidgetitem10 = firstold->item(2);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "23~30\346\255\262", 0));
        QListWidgetItem *___qlistwidgetitem11 = firstold->item(3);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "30\346\255\262\344\271\213\345\276\214", 0));
        firstold->setSortingEnabled(__sortingEnabled2);

        label_4->setText(QApplication::translate("MainWindow", "\345\210\235\346\210\200\345\271\264\351\275\241", 0));
        check->setText(QApplication::translate("MainWindow", "\344\272\206\350\247\243\344\277\235\345\257\206\346\242\235\346\254\276", 0));
        mate->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));

        const bool __sortingEnabled3 = job->isSortingEnabled();
        job->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem12 = job->item(0);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "\345\255\270\347\224\237", 0));
        QListWidgetItem *___qlistwidgetitem13 = job->item(1);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "\346\225\231\345\270\253", 0));
        QListWidgetItem *___qlistwidgetitem14 = job->item(2);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "\351\206\253\350\255\267\344\272\272\345\223\241", 0));
        QListWidgetItem *___qlistwidgetitem15 = job->item(3);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "\345\273\232\345\270\253", 0));
        QListWidgetItem *___qlistwidgetitem16 = job->item(4);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "\345\267\245\344\272\272", 0));
        QListWidgetItem *___qlistwidgetitem17 = job->item(5);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "\345\267\245\347\250\213\345\270\253", 0));
        QListWidgetItem *___qlistwidgetitem18 = job->item(6);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "\345\225\206\344\272\272", 0));
        QListWidgetItem *___qlistwidgetitem19 = job->item(7);
        ___qlistwidgetitem19->setText(QApplication::translate("MainWindow", "\351\201\213\345\213\225\345\256\266", 0));
        QListWidgetItem *___qlistwidgetitem20 = job->item(8);
        ___qlistwidgetitem20->setText(QApplication::translate("MainWindow", "\351\207\221\350\236\215\346\245\255", 0));
        QListWidgetItem *___qlistwidgetitem21 = job->item(9);
        ___qlistwidgetitem21->setText(QApplication::translate("MainWindow", "\344\275\234\345\256\266", 0));
        QListWidgetItem *___qlistwidgetitem22 = job->item(10);
        ___qlistwidgetitem22->setText(QApplication::translate("MainWindow", "\344\270\212\347\217\255\346\227\217", 0));
        job->setSortingEnabled(__sortingEnabled3);

        old2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PMingLiU'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        job2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PMingLiU'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        firstold2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PMingLiU'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        howmany2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PMingLiU'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        LOAD->setText(QApplication::translate("MainWindow", "LOAD", 0));
        SAVE->setText(QApplication::translate("MainWindow", "SAVE", 0));
        label_7->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\245", 0));
        label_8->setText(QApplication::translate("MainWindow", "\345\271\264\351\275\241", 0));
        label_9->setText(QApplication::translate("MainWindow", "\350\201\267\346\245\255", 0));
        label_10->setText(QApplication::translate("MainWindow", "\345\210\235\346\210\200\345\271\264\351\275\241", 0));
        label_11->setText(QApplication::translate("MainWindow", "\344\272\244\345\276\200\351\201\216\344\272\272\346\225\270", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\262\222\346\204\237\350\246\272\344\272\206", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\212\210\350\205\277", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\344\270\215\351\201\251\345\220\210\344\272\206", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\210\245\350\252\252\344\272\206", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\210\245\345\225\217  \346\262\222\346\234\211\344\272\244\351\201\216 ", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\210\206\346\211\213\345\216\237\345\233\240", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
