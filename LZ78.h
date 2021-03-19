#ifndef LZ78_H_INCLUDED
#define LZ78_H_INCLUDED
#include <vector>
#include <string>
#include "NoDic.h"
using namespace std;

class LZ78{
private:
    vector<string> dicionario;
    vector<NoDic*> codificacao;

public:

    void codifica(string palavra);
    bool existe(string procurada);
    int getIndice(string procurada);
    void imprimeDicionario();
    void imprimeCodificacao();




};


#endif // LZ78_H_INCLUDED
