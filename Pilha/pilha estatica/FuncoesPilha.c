#include "FuncoesPilha.h"



int isCheia(Pilha *pilha){
    if (pilha->topo == TAMANHO_MAX){
        return 0;
    } else {
        return 1;
    }
}

int isVazia(Pilha *pilha){
    if (pilha->topo == 0){
        return 0;
    } else {
        return 1;
    }
}



void empilha(int valor,Pilha *pilha){
    if (isCheia(pilha)){
        pilha->vetor[pilha->topo] = valor;
        pilha->topo++;
    } else {
        printf("Tamanho maximo da pilha atingido !!!");
    }
}

void desempilha(Pilha *pilha){
    if (isVazia(pilha)){
        printf("Elemento %d = %ls\n", pilha->topo, pilha->vetor);
        pilha->topo--;
    } else {
        printf("A pilha esta vazia !!!");
    }
}

void imprimepilha(Pilha *pilha){
    printf("Topo = %d\n", pilha->topo);
    for (int i = 0; i < pilha->topo; i++){
        printf("%d\n", pilha->vetor[i]);
    }
}
