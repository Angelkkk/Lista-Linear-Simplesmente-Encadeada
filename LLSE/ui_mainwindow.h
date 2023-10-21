/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_titulo;
    QPushButton *pushButton_ii;
    QPushButton *pushButton_ai;
    QPushButton *pushButton_ri;
    QLabel *label_valor;
    QTextEdit *textEdit_dados;
    QLineEdit *lineEdit_valor;
    QLabel *label_dados;
    QLabel *label_16;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_foto;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_logo;
    QLabel *label_titulo_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_lista;
    QPushButton *pushButton_if;
    QLabel *label_38;
    QPushButton *pushButton_af;
    QLabel *label_39;
    QPushButton *pushButton_rf;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QLabel *label_56;
    QPushButton *pushButton_rm;
    QLabel *label_57;
    QPushButton *pushButton_im;
    QPushButton *pushButton_am;
    QLabel *label_58;
    QLabel *label_59;
    QLabel *label_posicao;
    QLineEdit *lineEdit_posicao;
    QLabel *label_3;
    QPushButton *pushButton_mostrarLista;
    QLabel *label_60;
    QLabel *label_61;
    QLabel *label_62;
    QLabel *label_63;
    QLabel *label_64;
    QLabel *label_65;
    QLabel *label_66;
    QLabel *label_67;
    QLabel *label_68;
    QLabel *label_69;
    QLabel *label_70;
    QLabel *label_71;
    QLabel *label_72;
    QLabel *label_73;
    QLabel *label_74;
    QLabel *label_75;
    QLabel *label_76;
    QPushButton *pushButton_ioc;
    QLabel *label_77;
    QLabel *label_78;
    QPushButton *pushButton_iod;
    QLabel *label_posicao_2;
    QLabel *label_79;
    QLabel *label_80;
    QLabel *label_81;
    QLabel *label_82;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1011, 622);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #16161a;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_titulo = new QLabel(centralwidget);
        label_titulo->setObjectName(QString::fromUtf8("label_titulo"));
        label_titulo->setGeometry(QRect(60, 40, 331, 41));
        label_titulo->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"font: 700 25pt \"Berlin Sans FB Demi\";\n"
"background:transparent;"));
        pushButton_ii = new QPushButton(centralwidget);
        pushButton_ii->setObjectName(QString::fromUtf8("pushButton_ii"));
        pushButton_ii->setGeometry(QRect(10, 104, 131, 31));
        pushButton_ii->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/salve- (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ii->setIcon(icon);
        pushButton_ai = new QPushButton(centralwidget);
        pushButton_ai->setObjectName(QString::fromUtf8("pushButton_ai"));
        pushButton_ai->setGeometry(QRect(10, 150, 131, 31));
        pushButton_ai->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("img/codigo-de-acesso.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ai->setIcon(icon1);
        pushButton_ri = new QPushButton(centralwidget);
        pushButton_ri->setObjectName(QString::fromUtf8("pushButton_ri"));
        pushButton_ri->setGeometry(QRect(10, 196, 131, 31));
        pushButton_ri->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/excluir (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ri->setIcon(icon2);
        label_valor = new QLabel(centralwidget);
        label_valor->setObjectName(QString::fromUtf8("label_valor"));
        label_valor->setGeometry(QRect(19, 251, 101, 31));
        label_valor->setStyleSheet(QString::fromUtf8("color: #94a1b2;\n"
"font: 700 14pt \"Berlin Sans FB Demi\";\n"
"background:transparent;"));
        textEdit_dados = new QTextEdit(centralwidget);
        textEdit_dados->setObjectName(QString::fromUtf8("textEdit_dados"));
        textEdit_dados->setGeometry(QRect(20, 339, 651, 261));
        textEdit_dados->setStyleSheet(QString::fromUtf8("background-color: #fffffe;\n"
"border-radius: 20px;\n"
"color: #00000a;\n"
"font: 700 11pt \"Berlin Sans FB Demi\";"));
        lineEdit_valor = new QLineEdit(centralwidget);
        lineEdit_valor->setObjectName(QString::fromUtf8("lineEdit_valor"));
        lineEdit_valor->setGeometry(QRect(103, 256, 113, 24));
        lineEdit_valor->setStyleSheet(QString::fromUtf8("background-color: #fffffe;\n"
"border-radius: 10px;\n"
"color: #00000a;\n"
"font: 700 11pt \"Berlin Sans FB Demi\";"));
        label_dados = new QLabel(centralwidget);
        label_dados->setObjectName(QString::fromUtf8("label_dados"));
        label_dados->setGeometry(QRect(14, 301, 101, 31));
        label_dados->setStyleSheet(QString::fromUtf8("color: #94a1b2;\n"
"font: 700 14pt \"Berlin Sans FB Demi\";\n"
"background:transparent;"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(160, 100, 101, 16));
        label_16->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 200, 131, 31));
        label_22->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 154, 131, 31));
        label_23->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 108, 131, 31));
        label_24->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(699, -33, 341, 331));
        label_25->setStyleSheet(QString::fromUtf8("border-radius: 165px;\n"
"background-color: #7f5af0;"));
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(710, -50, 381, 371));
        label_26->setStyleSheet(QString::fromUtf8("border-radius: 185px;\n"
"background-color: #2cb67d;"));
        label_foto = new QLabel(centralwidget);
        label_foto->setObjectName(QString::fromUtf8("label_foto"));
        label_foto->setGeometry(QRect(733, -7, 271, 271));
        label_foto->setStyleSheet(QString::fromUtf8("border-radius: 135;\n"
"background-color: #fffffe;\n"
""));
        label_foto->setPixmap(QPixmap(QString::fromUtf8("img/foto.png")));
        label_foto->setScaledContents(true);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(160, 112, 101, 16));
        label_17->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(160, 137, 101, 16));
        label_18->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(160, 125, 101, 16));
        label_19->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(160, 170, 101, 16));
        label_20->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(160, 182, 101, 16));
        label_21->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(160, 157, 101, 16));
        label_27->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_28 = new QLabel(centralwidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(160, 145, 101, 16));
        label_28->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_29 = new QLabel(centralwidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(160, 180, 101, 16));
        label_29->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_30 = new QLabel(centralwidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(160, 160, 101, 16));
        label_30->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_31 = new QLabel(centralwidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(160, 172, 101, 16));
        label_31->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_32 = new QLabel(centralwidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(160, 147, 101, 16));
        label_32->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_33 = new QLabel(centralwidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(160, 217, 101, 16));
        label_33->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_34 = new QLabel(centralwidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(160, 205, 101, 16));
        label_34->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_35 = new QLabel(centralwidget);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(160, 192, 101, 16));
        label_35->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_36 = new QLabel(centralwidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(160, 135, 101, 16));
        label_36->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_37 = new QLabel(centralwidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(20, 283, 661, 16));
        label_37->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 900 11pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));
        label_logo->setGeometry(QRect(762, 380, 211, 211));
        label_logo->setScaledContents(false);
        label_titulo_2 = new QLabel(centralwidget);
        label_titulo_2->setObjectName(QString::fromUtf8("label_titulo_2"));
        label_titulo_2->setGeometry(QRect(747, 340, 231, 41));
        label_titulo_2->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"font: 700 15pt \"Berlin Sans FB Demi\";\n"
"background:transparent;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 350, 641, 261));
        label->setStyleSheet(QString::fromUtf8("background-color:  #72757e;\n"
"border-radius: 20px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(108, 262, 113, 24));
        label_2->setStyleSheet(QString::fromUtf8("background-color:  #72757e;\n"
"border-radius: 10px;"));
        label_lista = new QLabel(centralwidget);
        label_lista->setObjectName(QString::fromUtf8("label_lista"));
        label_lista->setGeometry(QRect(10, 40, 41, 41));
        label_lista->setStyleSheet(QString::fromUtf8("background-color: #7f5af0;"));
        label_lista->setPixmap(QPixmap(QString::fromUtf8("img/lista.png")));
        label_lista->setScaledContents(true);
        pushButton_if = new QPushButton(centralwidget);
        pushButton_if->setObjectName(QString::fromUtf8("pushButton_if"));
        pushButton_if->setGeometry(QRect(182, 104, 131, 31));
        pushButton_if->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        pushButton_if->setIcon(icon);
        label_38 = new QLabel(centralwidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(183, 108, 131, 31));
        label_38->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        pushButton_af = new QPushButton(centralwidget);
        pushButton_af->setObjectName(QString::fromUtf8("pushButton_af"));
        pushButton_af->setGeometry(QRect(182, 150, 131, 31));
        pushButton_af->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        pushButton_af->setIcon(icon);
        label_39 = new QLabel(centralwidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(183, 154, 131, 31));
        label_39->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        pushButton_rf = new QPushButton(centralwidget);
        pushButton_rf->setObjectName(QString::fromUtf8("pushButton_rf"));
        pushButton_rf->setGeometry(QRect(182, 200, 131, 31));
        pushButton_rf->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        pushButton_rf->setIcon(icon);
        label_40 = new QLabel(centralwidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(183, 204, 131, 31));
        label_40->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        label_41 = new QLabel(centralwidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(331, 137, 101, 16));
        label_41->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_42 = new QLabel(centralwidget);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(331, 184, 101, 16));
        label_42->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_43 = new QLabel(centralwidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(331, 147, 101, 16));
        label_43->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_44 = new QLabel(centralwidget);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(331, 139, 101, 16));
        label_44->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_45 = new QLabel(centralwidget);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(331, 127, 101, 16));
        label_45->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_46 = new QLabel(centralwidget);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(331, 194, 101, 16));
        label_46->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_47 = new QLabel(centralwidget);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(331, 219, 101, 16));
        label_47->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_48 = new QLabel(centralwidget);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(331, 207, 101, 16));
        label_48->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_49 = new QLabel(centralwidget);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(331, 182, 101, 16));
        label_49->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_50 = new QLabel(centralwidget);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(331, 114, 101, 16));
        label_50->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_51 = new QLabel(centralwidget);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(331, 162, 101, 16));
        label_51->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_52 = new QLabel(centralwidget);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(331, 159, 101, 16));
        label_52->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_53 = new QLabel(centralwidget);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(331, 174, 101, 16));
        label_53->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_54 = new QLabel(centralwidget);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(331, 149, 101, 16));
        label_54->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_55 = new QLabel(centralwidget);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(331, 172, 101, 16));
        label_55->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_56 = new QLabel(centralwidget);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(331, 102, 101, 16));
        label_56->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        pushButton_rm = new QPushButton(centralwidget);
        pushButton_rm->setObjectName(QString::fromUtf8("pushButton_rm"));
        pushButton_rm->setGeometry(QRect(352, 200, 131, 31));
        pushButton_rm->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        pushButton_rm->setIcon(icon);
        label_57 = new QLabel(centralwidget);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(353, 108, 131, 31));
        label_57->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        pushButton_im = new QPushButton(centralwidget);
        pushButton_im->setObjectName(QString::fromUtf8("pushButton_im"));
        pushButton_im->setGeometry(QRect(352, 104, 131, 31));
        pushButton_im->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        pushButton_im->setIcon(icon);
        pushButton_am = new QPushButton(centralwidget);
        pushButton_am->setObjectName(QString::fromUtf8("pushButton_am"));
        pushButton_am->setGeometry(QRect(352, 150, 131, 31));
        pushButton_am->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        pushButton_am->setIcon(icon);
        label_58 = new QLabel(centralwidget);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(353, 204, 131, 31));
        label_58->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        label_59 = new QLabel(centralwidget);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(353, 154, 131, 31));
        label_59->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        label_posicao = new QLabel(centralwidget);
        label_posicao->setObjectName(QString::fromUtf8("label_posicao"));
        label_posicao->setGeometry(QRect(252, 250, 111, 31));
        label_posicao->setStyleSheet(QString::fromUtf8("color: #94a1b2;\n"
"font: 700 14pt \"Berlin Sans FB Demi\";\n"
"background:transparent;"));
        lineEdit_posicao = new QLineEdit(centralwidget);
        lineEdit_posicao->setObjectName(QString::fromUtf8("lineEdit_posicao"));
        lineEdit_posicao->setGeometry(QRect(363, 254, 113, 24));
        lineEdit_posicao->setStyleSheet(QString::fromUtf8("background-color: #fffffe;\n"
"border-radius: 10px;\n"
"color: #00000a;\n"
"font: 700 11pt \"Berlin Sans FB Demi\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(368, 260, 113, 24));
        label_3->setStyleSheet(QString::fromUtf8("background-color:  #72757e;\n"
"border-radius: 10px;"));
        pushButton_mostrarLista = new QPushButton(centralwidget);
        pushButton_mostrarLista->setObjectName(QString::fromUtf8("pushButton_mostrarLista"));
        pushButton_mostrarLista->setGeometry(QRect(628, 552, 31, 31));
        pushButton_mostrarLista->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        pushButton_mostrarLista->setIcon(icon);
        label_60 = new QLabel(centralwidget);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(628, 557, 31, 31));
        label_60->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        label_61 = new QLabel(centralwidget);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setGeometry(QRect(500, 148, 101, 16));
        label_61->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_62 = new QLabel(centralwidget);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(500, 173, 101, 16));
        label_62->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_63 = new QLabel(centralwidget);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setGeometry(QRect(500, 220, 101, 16));
        label_63->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_64 = new QLabel(centralwidget);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setGeometry(QRect(500, 128, 101, 16));
        label_64->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_65 = new QLabel(centralwidget);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setGeometry(QRect(500, 160, 101, 16));
        label_65->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_66 = new QLabel(centralwidget);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setGeometry(QRect(500, 140, 101, 16));
        label_66->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_67 = new QLabel(centralwidget);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(500, 115, 101, 16));
        label_67->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_68 = new QLabel(centralwidget);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(500, 195, 101, 16));
        label_68->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_69 = new QLabel(centralwidget);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setGeometry(QRect(500, 208, 101, 16));
        label_69->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_70 = new QLabel(centralwidget);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setGeometry(QRect(500, 185, 101, 16));
        label_70->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_71 = new QLabel(centralwidget);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setGeometry(QRect(500, 163, 101, 16));
        label_71->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_72 = new QLabel(centralwidget);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setGeometry(QRect(500, 183, 101, 16));
        label_72->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_73 = new QLabel(centralwidget);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setGeometry(QRect(500, 138, 101, 16));
        label_73->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_74 = new QLabel(centralwidget);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setGeometry(QRect(500, 175, 101, 16));
        label_74->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_75 = new QLabel(centralwidget);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setGeometry(QRect(500, 103, 101, 16));
        label_75->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_76 = new QLabel(centralwidget);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setGeometry(QRect(500, 150, 101, 16));
        label_76->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        pushButton_ioc = new QPushButton(centralwidget);
        pushButton_ioc->setObjectName(QString::fromUtf8("pushButton_ioc"));
        pushButton_ioc->setGeometry(QRect(522, 139, 131, 31));
        pushButton_ioc->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        pushButton_ioc->setIcon(icon);
        label_77 = new QLabel(centralwidget);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setGeometry(QRect(523, 143, 131, 31));
        label_77->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        label_78 = new QLabel(centralwidget);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setGeometry(QRect(523, 194, 131, 31));
        label_78->setStyleSheet(QString::fromUtf8("background-color: #2cb67d;\n"
"border-radius: 15px;"));
        pushButton_iod = new QPushButton(centralwidget);
        pushButton_iod->setObjectName(QString::fromUtf8("pushButton_iod"));
        pushButton_iod->setGeometry(QRect(522, 190, 131, 31));
        pushButton_iod->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"background-color: #7f5af0;\n"
"border-radius: 15px;\n"
"font: 700 10pt \"Berlin Sans FB Demi\";"));
        pushButton_iod->setIcon(icon);
        label_posicao_2 = new QLabel(centralwidget);
        label_posicao_2->setObjectName(QString::fromUtf8("label_posicao_2"));
        label_posicao_2->setGeometry(QRect(510, 99, 161, 31));
        label_posicao_2->setStyleSheet(QString::fromUtf8("color: #fffffe;\n"
"font: 700 11pt \"Berlin Sans FB Demi\";\n"
"background:transparent;"));
        label_79 = new QLabel(centralwidget);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setGeometry(QRect(500, 230, 101, 16));
        label_79->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_80 = new QLabel(centralwidget);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setGeometry(QRect(500, 253, 101, 16));
        label_80->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_81 = new QLabel(centralwidget);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setGeometry(QRect(500, 240, 101, 16));
        label_81->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        label_82 = new QLabel(centralwidget);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setGeometry(QRect(500, 265, 101, 16));
        label_82->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: #fffffe;"));
        MainWindow->setCentralWidget(centralwidget);
        label_77->raise();
        label->raise();
        textEdit_dados->raise();
        label_60->raise();
        label_3->raise();
        label_58->raise();
        label_59->raise();
        label_52->raise();
        label_41->raise();
        label_55->raise();
        label_51->raise();
        label_44->raise();
        label_54->raise();
        label_49->raise();
        label_45->raise();
        label_50->raise();
        label_48->raise();
        label_46->raise();
        label_42->raise();
        label_53->raise();
        label_56->raise();
        label_47->raise();
        label_43->raise();
        label_40->raise();
        label_39->raise();
        label_38->raise();
        label_2->raise();
        label_26->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        label_titulo->raise();
        pushButton_ii->raise();
        pushButton_ai->raise();
        pushButton_ri->raise();
        label_valor->raise();
        lineEdit_valor->raise();
        label_dados->raise();
        label_16->raise();
        label_25->raise();
        label_foto->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        label_21->raise();
        label_27->raise();
        label_28->raise();
        label_29->raise();
        label_30->raise();
        label_31->raise();
        label_32->raise();
        label_33->raise();
        label_34->raise();
        label_35->raise();
        label_36->raise();
        label_37->raise();
        label_logo->raise();
        label_titulo_2->raise();
        label_lista->raise();
        pushButton_if->raise();
        pushButton_af->raise();
        pushButton_rf->raise();
        pushButton_rm->raise();
        label_57->raise();
        pushButton_im->raise();
        pushButton_am->raise();
        label_posicao->raise();
        lineEdit_posicao->raise();
        pushButton_mostrarLista->raise();
        label_61->raise();
        label_62->raise();
        label_63->raise();
        label_64->raise();
        label_65->raise();
        label_66->raise();
        label_67->raise();
        label_68->raise();
        label_69->raise();
        label_70->raise();
        label_71->raise();
        label_72->raise();
        label_73->raise();
        label_74->raise();
        label_75->raise();
        label_76->raise();
        pushButton_ioc->raise();
        label_78->raise();
        pushButton_iod->raise();
        label_posicao_2->raise();
        label_79->raise();
        label_80->raise();
        label_81->raise();
        label_82->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_titulo->setText(QCoreApplication::translate("MainWindow", "Projeto Lista LSE", nullptr));
        pushButton_ii->setText(QCoreApplication::translate("MainWindow", " Inserir In\303\255cio ", nullptr));
        pushButton_ai->setText(QCoreApplication::translate("MainWindow", "Acessar In\303\255cio", nullptr));
        pushButton_ri->setText(QCoreApplication::translate("MainWindow", " Retirar In\303\255cio", nullptr));
        label_valor->setText(QCoreApplication::translate("MainWindow", "\342\226\270 Valor:", nullptr));
        lineEdit_valor->setText(QString());
        label_dados->setText(QCoreApplication::translate("MainWindow", " \342\226\270 Dados:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        label_foto->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "________________________________________________________________________________________________________________", nullptr));
        label_logo->setText(QString());
        label_titulo_2->setText(QCoreApplication::translate("MainWindow", "Arthur Gomes Lima", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_lista->setText(QString());
        pushButton_if->setText(QCoreApplication::translate("MainWindow", " Inserir Final ", nullptr));
        label_38->setText(QString());
        pushButton_af->setText(QCoreApplication::translate("MainWindow", "Acessar Final", nullptr));
        label_39->setText(QString());
        pushButton_rf->setText(QCoreApplication::translate("MainWindow", " Retirar Final", nullptr));
        label_40->setText(QString());
        label_41->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        pushButton_rm->setText(QCoreApplication::translate("MainWindow", " Retirar Meio", nullptr));
        label_57->setText(QString());
        pushButton_im->setText(QCoreApplication::translate("MainWindow", " Inserir Meio ", nullptr));
        pushButton_am->setText(QCoreApplication::translate("MainWindow", "Acessar Meio", nullptr));
        label_58->setText(QString());
        label_59->setText(QString());
        label_posicao->setText(QCoreApplication::translate("MainWindow", "\342\226\270 Posi\303\247\303\243o:", nullptr));
        lineEdit_posicao->setText(QString());
        label_3->setText(QString());
        pushButton_mostrarLista->setText(QString());
        label_60->setText(QString());
        label_61->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_62->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_63->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_64->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_65->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_66->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_67->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_68->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_69->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_70->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_71->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_72->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_73->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_74->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_75->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_76->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        pushButton_ioc->setText(QCoreApplication::translate("MainWindow", "Crescente", nullptr));
        label_77->setText(QString());
        label_78->setText(QCoreApplication::translate("MainWindow", "Decrescente", nullptr));
        pushButton_iod->setText(QCoreApplication::translate("MainWindow", "Drescente", nullptr));
        label_posicao_2->setText(QCoreApplication::translate("MainWindow", "\342\226\270 Inserir ordenado:", nullptr));
        label_79->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_80->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_81->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_82->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
