/* 3. Construa uma estrutura aluno com nome, numero de matrícula e curso
Leia do usuário a informação de 5 alunos,armazene em vetor dessa estrutura e imprima os dados na tela.
*/
#include <stdio.h>

typedef struct{
    char nome[30];
    char matricula[30];
    char curso[30];
}Aluno;


int main(){
    Aluno alunos[5];
    for (int i = 0; i<5; i++){
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite o matricula do aluno: ");
        scanf(" %[^\n]", alunos[i].matricula);
        printf("Digite o curso do aluno: ");
        scanf(" %[^\n]", alunos[i].curso);
    }
    for (int i = 0; i<5; i++){
        printf("Nome do aluno: %s\n",alunos[i].nome);
        printf("Matricula do aluno: %s\n", alunos[i].matricula);
        printf("Curso do aluno: %s\n", alunos[i].curso);
    }
    return 0;
}