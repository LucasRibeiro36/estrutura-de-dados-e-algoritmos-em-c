
#include "FuncoesPilha.h"




int main(){
    Pilha p;
    p.topo = 0;
    empilha(3, &p);
    empilha(4, &p);
    empilha(7, &p);
    empilha(9, &p);
    empilha(2, &p);
    imprimepilha(&p);
    return 0;
}

