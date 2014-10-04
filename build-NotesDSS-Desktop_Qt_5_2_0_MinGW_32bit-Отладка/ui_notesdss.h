/********************************************************************************
** Form generated from reading UI file 'notesdss.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTESDSS_H
#define UI_NOTESDSS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotesDSS
{
public:
    QAction *action;
    QAction *action_3;
    QAction *aUnits;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_9;
    QAction *aFirms;
    QAction *action_13;
    QAction *action_14;
    QAction *action_15;
    QAction *action_17;
    QAction *action_18;
    QAction *action_20;
    QAction *action_21;
    QAction *action_22;
    QAction *action_23;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget_pages;
    QWidget *tab;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_5;
    QMenu *menu_6;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotesDSS)
    {
        if (NotesDSS->objectName().isEmpty())
            NotesDSS->setObjectName(QStringLiteral("NotesDSS"));
        NotesDSS->resize(871, 563);
        action = new QAction(NotesDSS);
        action->setObjectName(QStringLiteral("action"));
        action_3 = new QAction(NotesDSS);
        action_3->setObjectName(QStringLiteral("action_3"));
        aUnits = new QAction(NotesDSS);
        aUnits->setObjectName(QStringLiteral("aUnits"));
        action_5 = new QAction(NotesDSS);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_6 = new QAction(NotesDSS);
        action_6->setObjectName(QStringLiteral("action_6"));
        action_7 = new QAction(NotesDSS);
        action_7->setObjectName(QStringLiteral("action_7"));
        action_9 = new QAction(NotesDSS);
        action_9->setObjectName(QStringLiteral("action_9"));
        aFirms = new QAction(NotesDSS);
        aFirms->setObjectName(QStringLiteral("aFirms"));
        action_13 = new QAction(NotesDSS);
        action_13->setObjectName(QStringLiteral("action_13"));
        action_14 = new QAction(NotesDSS);
        action_14->setObjectName(QStringLiteral("action_14"));
        action_15 = new QAction(NotesDSS);
        action_15->setObjectName(QStringLiteral("action_15"));
        action_17 = new QAction(NotesDSS);
        action_17->setObjectName(QStringLiteral("action_17"));
        action_18 = new QAction(NotesDSS);
        action_18->setObjectName(QStringLiteral("action_18"));
        action_20 = new QAction(NotesDSS);
        action_20->setObjectName(QStringLiteral("action_20"));
        action_21 = new QAction(NotesDSS);
        action_21->setObjectName(QStringLiteral("action_21"));
        action_22 = new QAction(NotesDSS);
        action_22->setObjectName(QStringLiteral("action_22"));
        action_23 = new QAction(NotesDSS);
        action_23->setObjectName(QStringLiteral("action_23"));
        centralWidget = new QWidget(NotesDSS);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget_pages = new QTabWidget(centralWidget);
        tabWidget_pages->setObjectName(QStringLiteral("tabWidget_pages"));
        tabWidget_pages->setTabShape(QTabWidget::Triangular);
        tabWidget_pages->setDocumentMode(true);
        tabWidget_pages->setTabsClosable(true);
        tabWidget_pages->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_pages->addTab(tab, QString());

        gridLayout->addWidget(tabWidget_pages, 0, 0, 1, 1);

        NotesDSS->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NotesDSS);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 871, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_5 = new QMenu(menu);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menu_6 = new QMenu(menu);
        menu_6->setObjectName(QStringLiteral("menu_6"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        NotesDSS->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NotesDSS);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        NotesDSS->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NotesDSS);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NotesDSS->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu->addAction(menu_5->menuAction());
        menu->addAction(menu_6->menuAction());
        menu->addAction(action_22);
        menu->addAction(action_23);
        menu_5->addAction(action_13);
        menu_5->addAction(action_14);
        menu_5->addAction(action_15);
        menu_6->addAction(action_17);
        menu_6->addAction(action_20);
        menu_6->addAction(action_18);
        menu_6->addAction(action_21);
        menu_2->addAction(aFirms);
        menu_2->addSeparator();
        menu_2->addAction(action);
        menu_2->addSeparator();
        menu_2->addAction(action_3);
        menu_2->addAction(aUnits);
        menu_2->addSeparator();
        menu_2->addAction(action_9);
        menu_4->addAction(action_5);
        menu_4->addAction(action_6);
        menu_4->addAction(action_7);

        retranslateUi(NotesDSS);

        tabWidget_pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NotesDSS);
    } // setupUi

    void retranslateUi(QMainWindow *NotesDSS)
    {
        NotesDSS->setWindowTitle(QApplication::translate("NotesDSS", "NotesDSS", 0));
        action->setText(QApplication::translate("NotesDSS", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", 0));
        action_3->setText(QApplication::translate("NotesDSS", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273\321\213", 0));
        aUnits->setText(QApplication::translate("NotesDSS", "\320\225\320\264\320\270\320\275\320\270\321\206\321\213 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217", 0));
        action_5->setText(QApplication::translate("NotesDSS", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", 0));
        action_6->setText(QApplication::translate("NotesDSS", "\320\237\320\276\320\274\320\276\321\211\321\214", 0));
        action_7->setText(QApplication::translate("NotesDSS", "\320\222\321\213\321\205\320\276\320\264", 0));
        action_9->setText(QApplication::translate("NotesDSS", "\320\236\320\261\321\212\320\265\320\272\321\202\321\213", 0));
        aFirms->setText(QApplication::translate("NotesDSS", "\320\232\320\276\320\275\321\202\321\200\320\260\320\263\320\265\320\275\321\202\321\213", 0));
        action_13->setText(QApplication::translate("NotesDSS", "\320\237\320\276\320\272\321\203\320\277\320\272\320\260", 0));
        action_14->setText(QApplication::translate("NotesDSS", "\320\237\321\200\320\270\321\210\320\273\320\276 \320\262 \321\200\320\265\320\274\320\276\320\275\321\202", 0));
        action_15->setText(QApplication::translate("NotesDSS", "\320\222\320\265\321\200\320\275\321\203\320\273\320\276\321\201\321\214 \320\277\320\276\321\201\320\273\320\265 \321\200\320\265\320\274\320\276\320\275\321\202\320\260, \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270", 0));
        action_17->setText(QApplication::translate("NotesDSS", "\320\237\321\200\320\276\320\264\320\260\320\266\320\260", 0));
        action_18->setText(QApplication::translate("NotesDSS", "\320\236\321\202\320\277\321\200\320\260\320\262\320\272\320\260 \320\262 \321\200\320\265\320\274\320\276\320\275\321\202", 0));
        action_20->setText(QApplication::translate("NotesDSS", "\320\236\321\202\320\277\321\200\320\260\320\262\320\272\320\260 \320\277\320\276\321\201\320\273\320\265 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", 0));
        action_21->setText(QApplication::translate("NotesDSS", "\320\221\321\200\320\260\320\272", 0));
        action_22->setText(QApplication::translate("NotesDSS", "\320\242\321\200\320\265\320\261\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        action_23->setText(QApplication::translate("NotesDSS", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\201\321\202\320\262\320\276", 0));
        tabWidget_pages->setTabText(tabWidget_pages->indexOf(tab), QApplication::translate("NotesDSS", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", 0));
        menu->setTitle(QApplication::translate("NotesDSS", "\320\224\320\276\320\272\321\203\320\274\320\265\320\275\321\202\321\213", 0));
        menu_5->setTitle(QApplication::translate("NotesDSS", "\320\220\320\272\321\202 \320\276\320\277\321\200\320\270\321\205\320\276\320\264\320\276\320\262\320\260\320\275\320\270\321\217", 0));
        menu_6->setTitle(QApplication::translate("NotesDSS", "\320\220\320\272\321\202 \321\201\320\277\320\270\321\201\320\260\320\275\320\270\321\217", 0));
        menu_2->setTitle(QApplication::translate("NotesDSS", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272\320\270", 0));
        menu_3->setTitle(QApplication::translate("NotesDSS", "\320\236\321\202\321\207\320\265\321\202\321\213", 0));
        menu_4->setTitle(QApplication::translate("NotesDSS", "?", 0));
    } // retranslateUi

};

namespace Ui {
    class NotesDSS: public Ui_NotesDSS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTESDSS_H
