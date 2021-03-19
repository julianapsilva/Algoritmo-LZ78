#ifndef NODIC_H_INCLUDED
#define NODIC_H_INCLUDED

class NoDic
{
private:
    int indice;
    char c;

public:
    int getIndice(){ return indice;};
    void setIndice(int val) { indice=val;};
    void setC(char val) { c=val;};
    char getC(){ return c;};

};


#endif // NODIC_H_INCLUDED
