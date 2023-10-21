#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    L1 = new ams::listaLSE();
    QPixmap foto(":/imgs/img/foto.png");
    ui->label_foto->setPixmap(foto.scaled(271,271,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    QIcon save(":/imgs/img/salvar.png");
    ui->pushButton_ii->setIcon(save);
    ui->pushButton_if->setIcon(save);
    ui->pushButton_im->setIcon(save);
    QIcon acessar(":/imgs/img/acessar.png");
    ui->pushButton_ai->setIcon(acessar);
    ui->pushButton_af->setIcon(acessar);
    ui->pushButton_am->setIcon(acessar);
    QIcon excluir(":/imgs/img/excluir.png");
    ui->pushButton_ri->setIcon(excluir);
    ui->pushButton_rf->setIcon(excluir);
    ui->pushButton_rm->setIcon(excluir);
    QIcon mostrar(":/imgs/img/mostrar.png");
    ui->pushButton_mostrarLista->setIcon(mostrar);
    QPixmap logo(":/imgs/img/logo.png");
    ui->label_logo->setPixmap(logo.scaled(211,211,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    QPixmap lista(":/imgs/img/lista.png");
    ui->label_lista->setPixmap(lista.scaled(41,41,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    setStyleSheet("QMessageBox { }"
                  "QMainWindow { background-color: #16161a; }");
    ui->lineEdit_valor->setValidator(valor);
    ui->lineEdit_posicao->setValidator(posicao);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete L1;
    delete valor;
    delete posicao;
}


void MainWindow::on_pushButton_ii_clicked()
{
    try {
        if (ui->lineEdit_valor->text().isEmpty()) throw QString("◂ Insira um valor");
        L1->inserirInicio(ui->lineEdit_valor->text().toInt());
        ui->textEdit_dados->setText(L1->toString());
        ui->lineEdit_valor->clear();
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
        ui->lineEdit_valor->clear();

    }
}


void MainWindow::on_pushButton_ai_clicked()
{
    try {
        QString saida = "◂ Valor inicial da lista: " + QString::number(L1->acessarInicio());
        ui->textEdit_dados->setText(saida);
    } catch (QString erro) {

        QMessageBox::warning(this, "⨉ ERRO", erro);
    }
}



void MainWindow::on_pushButton_ri_clicked()
{
    try {
        L1->retirarInicio();
        QString saida;
        if(L1->estaVazia()) saida = "◂ Lista vazia";
        else saida = L1->toString();
        ui->textEdit_dados->setText(saida);
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
    }
}


void MainWindow::on_pushButton_if_clicked()
{
    try {
        if (ui->lineEdit_valor->text().isEmpty()) throw QString("◂ Insira um valor");
        L1->inserirFinal(ui->lineEdit_valor->text().toInt());
        ui->textEdit_dados->setText(L1->toString());
        ui->lineEdit_valor->clear();
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
        ui->lineEdit_valor->clear();
    }
}


void MainWindow::on_pushButton_af_clicked()
{
    try {
        QString saida = "◂ Valor final da lista: " + QString::number(L1->acessarFinal());
        ui->textEdit_dados->setText(saida);
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
    }
}


void MainWindow::on_pushButton_rf_clicked()
{
    try {
        L1->retirarFinal();
        QString saida;
        if(L1->estaVazia()) saida = "◂ Lista vazia";
        else saida = L1->toString();
        ui->textEdit_dados->setText(saida);
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
    }
}


void MainWindow::on_pushButton_im_clicked()
{
    try {
        if (ui->lineEdit_valor->text().isEmpty()) throw QString("◂ Insira um valor");
        L1->inserirMeio(ui->lineEdit_valor->text().toInt(),ui->lineEdit_posicao->text().toInt()-1);
        ui->textEdit_dados->setText(L1->toString());
        ui->lineEdit_valor->clear();
        ui->lineEdit_posicao->clear();
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
    }
}


void MainWindow::on_pushButton_am_clicked()
{
    try {
        QString saida = "◂ Valor da posição " + ui->lineEdit_posicao->text() + " da lista: " + QString::number(L1->acessarMeio(ui->lineEdit_posicao->text().toInt()));
        ui->textEdit_dados->setText(saida);
        ui->lineEdit_posicao->clear();
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
    }
}


void MainWindow::on_pushButton_rm_clicked()
{
    try {
        L1->retirarMeio(ui->lineEdit_posicao->text().toInt()-1);
        QString saida;
        if(L1->estaVazia()) saida = "◂ Lista vazia";
        else saida = L1->toString();
        ui->textEdit_dados->setText(saida);
        ui->lineEdit_posicao->clear();
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
    }
}


void MainWindow::on_pushButton_mostrarLista_clicked()
{
    try {
        ui->textEdit_dados->setText(L1->toString());
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
    }
}


void MainWindow::on_pushButton_ioc_clicked()
{
    try {
        if (ui->lineEdit_valor->text().isEmpty()) throw QString("◂ Insira um valor");
        L1->inserirCrescente(ui->lineEdit_valor->text().toInt());
        ui->textEdit_dados->setText(L1->toString());
        ui->lineEdit_valor->clear();
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
    }
}


void MainWindow::on_pushButton_iod_clicked()
{
    try {
        if (ui->lineEdit_valor->text().isEmpty()) throw QString("◂ Insira um valor");
        L1->inserirDecrescente(ui->lineEdit_valor->text().toInt());
        ui->textEdit_dados->setText(L1->toString());
        ui->lineEdit_valor->clear();
    } catch (QString erro) {
        QMessageBox::warning(this, "⨉ ERRO", erro);
    }
}

