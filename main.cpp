#include <iostream>
#include "LZ78.h"

using namespace std;

int main()
{
    LZ78 novo;
    //novo.codifica("bananabanabofana");
    novo.codifica("ATGTCGTCATGTCATGCTAGCTATGTGTCATGTATG");
    novo.imprimeCodificacao();





    return 0;
}
