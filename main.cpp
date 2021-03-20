#include <iostream>
#include <fstream>
#include "LZ78.h"

using namespace std;

string leArquivoTexto(string arquivo)
{
    ifstream arq(arquivo);
    string str,aux;
    if(arq.is_open())
    {
        while(getline(arq, str))
        {
            aux+=str;;
        }
    }
    else
        cerr << "ERRO: O arquivo nao pode ser aberto!" << endl;

    return aux;
}


int main()
{
    string arquivo="arquivo.txt";
    LZ78 novo;
    novo.codifica(leArquivoTexto(arquivo));
    novo.imprimeCodificacao();

    return 0;
}
