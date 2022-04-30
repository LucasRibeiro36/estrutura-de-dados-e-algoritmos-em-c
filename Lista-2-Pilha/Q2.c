#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX 30

typedef struct {
    char letra[TAM_MAX];
    int topo;
} Pilha;


void empilha(char valor,Pilha *pilha);
void desempilha(Pilha *pilha);
int seCheia(Pilha *pilha);
int seVazia(Pilha *pilha);
void imprimepilha(Pilha *pilha);
void criaPilha(Pilha *pilha);
void invertePalavra(char palavra[]);

int main(){
    Pilha txt, txt_inv;
    char *palavra = (char*) malloc(sizeof(char));
    criaPilha(&txt);
    criaPilha(&txt_inv);
    char frase[30];
    strcpy(frase, "Este exercicio eh muito facil");

    if (strlen(frase) == 0) return 1;
    for (int i = 0; i < strlen(frase); i++) {
        empilha(frase[i], &txt);
    }
    imprimepilha(&txt);
    while (!seVazia(&txt)) {
        desempilha(&txt);
        empilha(txt.letra[txt.topo], &txt_inv);
    }
    imprimepilha(&txt_inv);
    
}







void criaPilha(Pilha *pilha){
    pilha->topo = 0;
}



int seCheia(Pilha *pilha){
    if (pilha->topo == TAM_MAX){
        return 0;
    } else {
        return 1;
    }
}

int seVazia(Pilha *pilha){
    if (pilha->topo == 0){
        return 1;
    } else {
        return 0;
    }
}



void empilha(char valor,Pilha *pilha){
    if (seCheia(pilha)){
        pilha->letra[pilha->topo] = valor;
        pilha->topo++;
    } else {
        printf("Pilha cheia\n");
    }
}

void desempilha(Pilha *pilha){
    if (seVazia(pilha)){
        printf("Pilha vazia !!!");
    } else {
        pilha->topo--;
    }
}

void imprimepilha(Pilha *pilha){
    printf("Topo = %d\n", pilha->topo);
    for (int i=0; i<=pilha->topo; i++){
        printf("%c", pilha->letra[i]);
    }
    printf("\n");
}


