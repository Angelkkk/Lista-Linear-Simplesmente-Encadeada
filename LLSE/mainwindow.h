#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <listalse.h>
#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include <QPixmap>
#include <QIcon>
#include <QIntValidator>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ii_clicked();

    void on_pushButton_ai_clicked();

    void on_pushButton_ri_clicked();

    void on_pushButton_if_clicked();

    void on_pushButton_af_clicked();

    void on_pushButton_rf_clicked();

    void on_pushButton_im_clicked();

    void on_pushButton_am_clicked();

    void on_pushButton_rm_clicked();

    void on_pushButton_mostrarLista_clicked();

    void on_pushButton_ioc_clicked();

    void on_pushButton_iod_clicked();

private:
    Ui::MainWindow *ui;
    ams::listaLSE *L1;
    QValidator *valor = new QIntValidator(-999, 999, this);
    QValidator *posicao = new QIntValidator(1, 999, this);
};
#endif // MAINWINDOW_H
