#ifndef NO_H
#define NO_H
#include <QString>
namespace ams {
class No
{
private:
    int dado;
    No *proximo;
public:
    No();
    No(int dado);
    int getDado() const;
    void setDado(int newDado);
    No *getProximo() const;
    void setProximo(No *newProximo);
    QString toString()const;
};
}
#endif // NO_H
