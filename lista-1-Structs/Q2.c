// 2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.

#include <stdio.h>

typedef struct{
    char nome[30];
    int idade;
    char endereco[30];
}Dados;

int main(){
    Dados pessoa;

    printf("Digite o seu nome: ");
    scanf(" %[^\n]", pessoa.nome);
    printf("Digite o endereco: ");
    scanf(" %[^\n]", pessoa.endereco);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("O nome é %s\n", pessoa.nome);
    printf("O endereço é %s", pessoa.endereco);
    printf("A idade é %d\n", pessoa.idade);

}