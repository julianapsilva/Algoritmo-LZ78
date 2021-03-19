#include "LZ78.h"
#include <iostream>
using namespace std;

bool LZ78::existe(string procurada){
    for(int i=0;i<dicionario.size();i++){
         if(dicionario[i]==procurada)
            return true;
    }
        return false;
}

int LZ78::getIndice(string procurada){
    for(int i=0;i<dicionario.size();i++){
        if(dicionario[i]==procurada){
            return i;
    }
}}

void LZ78::codifica(string palavra)
{
    dicionario.push_back("");
    int i=0; char c;
    string busca="";
    while(i<palavra.length())
    {
        c=palavra[i];

        if(existe(busca+c))
                busca+=c;

        else{
            NoDic* p= new NoDic();
            p->c=c;
            p->indice=getIndice(busca);
            codificacao.push_back(p);
            dicionario.push_back(busca+c);
            busca="";
        }
        i++;
    }
}

void LZ78::imprimeDicionario(){
    for(int i=0;i<dicionario.size();i++)
        cout<< dicionario[i] << endl;

}

void LZ78::imprimeCodificacao(){
    cout<< "IMPRIMINDO CODIFICACAO" <<endl;
    for(int i=0;i<codificacao.size();i++)
        cout<< "(" << codificacao[i]->indice<< ", " << codificacao[i]->c << ")" << endl;

}







