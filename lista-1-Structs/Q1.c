#include <stdio.h>

// criar estrutura compromisso


typedef struct{
    int horas,minitos,segundos;
}Horario;

typedef struct{
    int dia,mes,ano;
}Data;


typedef struct{
    Horario Horario;
    Data data;
    char descricao[50];
}Compromisso;


int main(){
    return 0;
}