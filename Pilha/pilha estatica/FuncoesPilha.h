#ifndef FUNCOES_PILHA
#define FUNCOES_PILHA
#include <stdio.h>
#define TAMANHO_MAX 20

typedef struct {
    int vetor[TAMANHO_MAX];
    int topo;
} Pilha;


void empilha(int valor,Pilha *pilha);
void desempilha(Pilha *pilha);
int seCheia(Pilha *pilha);
int seVazia(Pilha *pilha);
void imprimepilha(Pilha *pilha);
#endif