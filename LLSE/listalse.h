#ifndef LISTALSE_H
#define LISTALSE_H
#include <no.h>
#include <QString>
namespace ams {
class listaLSE
{
private:
    No *inicio;
    int quantidadeElementos;
 public:

    listaLSE();
    int getQuantidadeElementos()const;
    bool estaVazia()const;
    //inicio
    void inserirInicio(int dado);
    int acessarInicio()const;
    void retirarInicio();
    //final
    void inserirFinal(int dado);
    int acessarFinal()const;
    void retirarFinal();
    //meio
    void inserirMeio(int dado, int posicao);
    int acessarMeio(int posicao);
    void retirarMeio(int posicao);
    //ordenado
    void inserirCrescente(int dado);
    void inserirDecrescente(int dado);
    QString toString()const;
};
}
#endif // LISTALSE_H
