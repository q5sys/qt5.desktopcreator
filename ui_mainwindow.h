/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QAction *actionSave;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_genericname;
    QLineEdit *lineEdit_genericname;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_comment;
    QLineEdit *lineEdit_comment;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_keywords;
    QLineEdit *lineEdit_keywords;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_executable;
    QLineEdit *lineEdit_executable;
    QPushButton *pushButton_executable;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_icon;
    QLineEdit *lineEdit_icon;
    QPushButton *pushButton_icon;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label__categories;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_audio;
    QCheckBox *checkBox_video;
    QCheckBox *checkBox_development;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_education;
    QCheckBox *checkBox_game;
    QCheckBox *checkBox_graphics;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_network;
    QCheckBox *checkBox_office;
    QCheckBox *checkBox_science;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox_settings;
    QCheckBox *checkBox_system;
    QCheckBox *checkBox_utility;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_terminal;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_save;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(564, 492);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_name = new QLabel(centralWidget);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout_3->addWidget(label_name);

        lineEdit_name = new QLineEdit(centralWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_3->addWidget(lineEdit_name);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_genericname = new QLabel(centralWidget);
        label_genericname->setObjectName(QStringLiteral("label_genericname"));

        horizontalLayout_4->addWidget(label_genericname);

        lineEdit_genericname = new QLineEdit(centralWidget);
        lineEdit_genericname->setObjectName(QStringLiteral("lineEdit_genericname"));

        horizontalLayout_4->addWidget(lineEdit_genericname);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_comment = new QLabel(centralWidget);
        label_comment->setObjectName(QStringLiteral("label_comment"));

        horizontalLayout_5->addWidget(label_comment);

        lineEdit_comment = new QLineEdit(centralWidget);
        lineEdit_comment->setObjectName(QStringLiteral("lineEdit_comment"));

        horizontalLayout_5->addWidget(lineEdit_comment);


        verticalLayout_6->addLayout(horizontalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_keywords = new QLabel(centralWidget);
        label_keywords->setObjectName(QStringLiteral("label_keywords"));
        label_keywords->setToolTipDuration(3);

        horizontalLayout_7->addWidget(label_keywords);

        lineEdit_keywords = new QLineEdit(centralWidget);
        lineEdit_keywords->setObjectName(QStringLiteral("lineEdit_keywords"));

        horizontalLayout_7->addWidget(lineEdit_keywords);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_6->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_executable = new QLabel(centralWidget);
        label_executable->setObjectName(QStringLiteral("label_executable"));

        horizontalLayout_6->addWidget(label_executable);

        lineEdit_executable = new QLineEdit(centralWidget);
        lineEdit_executable->setObjectName(QStringLiteral("lineEdit_executable"));

        horizontalLayout_6->addWidget(lineEdit_executable);

        pushButton_executable = new QPushButton(centralWidget);
        pushButton_executable->setObjectName(QStringLiteral("pushButton_executable"));

        horizontalLayout_6->addWidget(pushButton_executable);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_icon = new QLabel(centralWidget);
        label_icon->setObjectName(QStringLiteral("label_icon"));

        horizontalLayout_2->addWidget(label_icon);

        lineEdit_icon = new QLineEdit(centralWidget);
        lineEdit_icon->setObjectName(QStringLiteral("lineEdit_icon"));

        horizontalLayout_2->addWidget(lineEdit_icon);

        pushButton_icon = new QPushButton(centralWidget);
        pushButton_icon->setObjectName(QStringLiteral("pushButton_icon"));

        horizontalLayout_2->addWidget(pushButton_icon);


        verticalLayout_6->addLayout(horizontalLayout_2);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label__categories = new QLabel(centralWidget);
        label__categories->setObjectName(QStringLiteral("label__categories"));

        horizontalLayout->addWidget(label__categories);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        checkBox_audio = new QCheckBox(centralWidget);
        checkBox_audio->setObjectName(QStringLiteral("checkBox_audio"));

        verticalLayout_2->addWidget(checkBox_audio);

        checkBox_video = new QCheckBox(centralWidget);
        checkBox_video->setObjectName(QStringLiteral("checkBox_video"));

        verticalLayout_2->addWidget(checkBox_video);

        checkBox_development = new QCheckBox(centralWidget);
        checkBox_development->setObjectName(QStringLiteral("checkBox_development"));

        verticalLayout_2->addWidget(checkBox_development);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkBox_education = new QCheckBox(centralWidget);
        checkBox_education->setObjectName(QStringLiteral("checkBox_education"));

        verticalLayout_3->addWidget(checkBox_education);

        checkBox_game = new QCheckBox(centralWidget);
        checkBox_game->setObjectName(QStringLiteral("checkBox_game"));

        verticalLayout_3->addWidget(checkBox_game);

        checkBox_graphics = new QCheckBox(centralWidget);
        checkBox_graphics->setObjectName(QStringLiteral("checkBox_graphics"));

        verticalLayout_3->addWidget(checkBox_graphics);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        checkBox_network = new QCheckBox(centralWidget);
        checkBox_network->setObjectName(QStringLiteral("checkBox_network"));

        verticalLayout_4->addWidget(checkBox_network);

        checkBox_office = new QCheckBox(centralWidget);
        checkBox_office->setObjectName(QStringLiteral("checkBox_office"));

        verticalLayout_4->addWidget(checkBox_office);

        checkBox_science = new QCheckBox(centralWidget);
        checkBox_science->setObjectName(QStringLiteral("checkBox_science"));

        verticalLayout_4->addWidget(checkBox_science);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        checkBox_settings = new QCheckBox(centralWidget);
        checkBox_settings->setObjectName(QStringLiteral("checkBox_settings"));

        verticalLayout_5->addWidget(checkBox_settings);

        checkBox_system = new QCheckBox(centralWidget);
        checkBox_system->setObjectName(QStringLiteral("checkBox_system"));

        verticalLayout_5->addWidget(checkBox_system);

        checkBox_utility = new QCheckBox(centralWidget);
        checkBox_utility->setObjectName(QStringLiteral("checkBox_utility"));

        verticalLayout_5->addWidget(checkBox_utility);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        checkBox_terminal = new QCheckBox(centralWidget);
        checkBox_terminal->setObjectName(QStringLiteral("checkBox_terminal"));
        checkBox_terminal->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_8->addWidget(checkBox_terminal);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        horizontalLayout_8->addWidget(pushButton_save);


        verticalLayout_6->addLayout(horizontalLayout_8);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 564, 27));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
#ifndef QT_NO_SHORTCUT
        label_name->setBuddy(lineEdit_name);
        label_genericname->setBuddy(lineEdit_genericname);
        label_comment->setBuddy(lineEdit_comment);
        label_keywords->setBuddy(lineEdit_keywords);
        label_executable->setBuddy(lineEdit_executable);
        label_icon->setBuddy(lineEdit_icon);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionSave);
        menuMenu->addAction(actionClose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionClose->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        label_name->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        label_genericname->setText(QApplication::translate("MainWindow", "Generic Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_comment->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_comment->setText(QApplication::translate("MainWindow", "Comment", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_keywords->setToolTip(QApplication::translate("MainWindow", "Values seperated by semicolon (no spaces) ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_keywords->setText(QApplication::translate("MainWindow", "Keywords", Q_NULLPTR));
        lineEdit_keywords->setPlaceholderText(QApplication::translate("MainWindow", "Keywords separated by semicolons with no spaces", Q_NULLPTR));
        label_executable->setText(QApplication::translate("MainWindow", "Executable", Q_NULLPTR));
        pushButton_executable->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        label_icon->setText(QApplication::translate("MainWindow", "Icon", Q_NULLPTR));
        pushButton_icon->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        label__categories->setText(QApplication::translate("MainWindow", "Categories", Q_NULLPTR));
        checkBox_audio->setText(QApplication::translate("MainWindow", "Audio", Q_NULLPTR));
        checkBox_video->setText(QApplication::translate("MainWindow", "Video", Q_NULLPTR));
        checkBox_development->setText(QApplication::translate("MainWindow", "Development", Q_NULLPTR));
        checkBox_education->setText(QApplication::translate("MainWindow", "Education", Q_NULLPTR));
        checkBox_game->setText(QApplication::translate("MainWindow", "Game", Q_NULLPTR));
        checkBox_graphics->setText(QApplication::translate("MainWindow", "Graphics", Q_NULLPTR));
        checkBox_network->setText(QApplication::translate("MainWindow", "Network", Q_NULLPTR));
        checkBox_office->setText(QApplication::translate("MainWindow", "Office", Q_NULLPTR));
        checkBox_science->setText(QApplication::translate("MainWindow", "Science", Q_NULLPTR));
        checkBox_settings->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        checkBox_system->setText(QApplication::translate("MainWindow", "System", Q_NULLPTR));
        checkBox_utility->setText(QApplication::translate("MainWindow", "Utility", Q_NULLPTR));
        checkBox_terminal->setText(QApplication::translate("MainWindow", "Run in Terminal", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
