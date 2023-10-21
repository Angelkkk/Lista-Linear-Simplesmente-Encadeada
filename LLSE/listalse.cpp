#include "listalse.h"
namespace ams {
listaLSE::listaLSE():
    inicio(0),
    quantidadeElementos(0)
{

}
int listaLSE::getQuantidadeElementos() const
{
    return quantidadeElementos;
}

bool listaLSE::estaVazia() const
{
    return (quantidadeElementos == 0);
}

void listaLSE::inserirInicio(int dado)
{
    try {
        No *novoNo = new No(dado);
        novoNo->setProximo(inicio);
        inicio = novoNo;
        quantidadeElementos++;
    } catch (std::bad_alloc &erro) {
        throw QString("O novo nó não pôde ser criado.");
    }
}

int listaLSE::acessarInicio() const
{
    if (estaVazia()) throw QString("▸ Lista vazia");
    return inicio->getDado();
}

void listaLSE::retirarInicio()
{
    if (estaVazia()) throw QString("▸ lista vazia");
    No *paux = inicio;
    inicio = inicio->getProximo();
    quantidadeElementos--;
    delete paux;
}

void listaLSE::inserirFinal(int dado)
{
    try {
        No *novoNo = new No(dado);
        if (estaVazia()){
            inicio = novoNo;
            quantidadeElementos++;
            return;
        }
        No *paux = inicio;
        while (paux->getProximo()){
            paux = paux->getProximo();
        }
        paux->setProximo(novoNo);
        quantidadeElementos++;
    } catch (std::bad_alloc &erro) {
        throw QString("O novo nó não pôde ser criado.");
    }
}

int listaLSE::acessarFinal() const
{
    if (estaVazia()) throw QString("▸ Lista vazia");
    No *paux = inicio;
    while (paux->getProximo()){
        paux = paux->getProximo();
    }
    return paux->getDado();
}

void listaLSE::retirarFinal()
{
    if (estaVazia()) throw QString("▸ Lista vazia");
    if (quantidadeElementos == 1) {
        delete inicio;
        quantidadeElementos = 0;
        inicio = 0;
        return;
    }
    No *paux = inicio;
    No *pant = 0;
    while(paux->getProximo()){
        pant = paux;
        paux = paux->getProximo();
    }
    pant->setProximo(0);
    quantidadeElementos--;
    delete paux;
}

void listaLSE::inserirMeio(int dado, int posicao)
{
    try {
        if (posicao < 0 || posicao > quantidadeElementos) throw QString("▸ Posição inválida");
        No *novoNo = new No(dado);
        if (posicao == 0) {
            novoNo->setProximo(inicio);
            inicio = novoNo;
        } else {
            No *paux = inicio;
            for (int i = 0; i < posicao - 1; i++) {
                paux = paux->getProximo();
            }
            novoNo->setProximo(paux->getProximo());
            paux->setProximo(novoNo);
        }
        quantidadeElementos++;
    } catch (std::bad_alloc &erro) {
        throw QString("O novo nó não pôde ser criado.");
    }
}

int listaLSE::acessarMeio(int posicao)
{

        if (estaVazia()) throw QString("▸ Lista vazia");
        if (posicao <= 0 || posicao > quantidadeElementos) throw QString("▸ Posição inválida");
        No *paux = inicio;
        for (int i = 0; i < posicao-1; i++){
            paux = paux->getProximo();
        }
        return paux->getDado();
}

void listaLSE::retirarMeio(int posicao)
{

        if (estaVazia()) throw QString("▸ Lista vazia");
        if (posicao < 0 || posicao > quantidadeElementos) throw QString("▸ Posição inválida");
        No *paux;
           if (posicao == 0) {
               paux = inicio;
               inicio = inicio->getProximo();
           } else {
               No *pant = inicio;
               for (int i = 0; i < posicao - 1; i++) {
                   pant = pant->getProximo();
               }
               paux = pant->getProximo();
               pant->setProximo(paux->getProximo());
           }
           delete paux;
           quantidadeElementos--;
}

void listaLSE::inserirCrescente(int dado)
{
    try {


        No* novo = new No(dado);

        if (!inicio || dado <= inicio->getDado()) {
            novo->setProximo(inicio);
            inicio = novo;
            quantidadeElementos++;
            return;
        }

        No* atual = inicio;
        No* anterior = 0;

        while (atual && dado > atual->getDado()) {
            anterior = atual;
            atual = atual->getProximo();
        }

        anterior->setProximo(novo);
        novo->setProximo(atual);
        quantidadeElementos++;
    } catch (std::bad_alloc &erro) {
        throw QString("O novo nó não pôde ser criado.");
    }
}

void listaLSE::inserirDecrescente(int dado)
{
    {
        try {
            No* novo = new No(dado);

                    if (!inicio || dado > inicio->getDado()) {
                        novo->setProximo(inicio);
                        inicio = novo;
                        quantidadeElementos++;
                        return;
                    }

                    No* atual = inicio;
                    No* anterior = nullptr;

                    while (atual && dado <= atual->getDado()) {
                        anterior = atual;
                        atual = atual->getProximo();
                    }

                    anterior->setProximo(novo);
                    novo->setProximo(atual);
                    quantidadeElementos++;
        } catch (std::bad_alloc &erro) {
            throw QString("O novo nó não pôde ser criado.");
        }
    }
}

QString listaLSE::toString() const
{
    if (estaVazia()) throw QString("▸ Lista vazia");
    QString saida = "◂ Dados da lista: ";
    No *paux = inicio;
    for(int pos = 0;pos < quantidadeElementos-1; pos++){
        saida += paux->toString() + "➟ ";
        paux = paux->getProximo();
    }
    saida += paux->toString();
    return saida;
}



}
