#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    int idade;
    float salario;
} pessoa;

int main(){

    pessoa p1;

    printf("Digite o seu nome: ");
    scanf("%[^\n]",p1.nome);

    printf("Agora, sua idade: ");
    scanf("%d",&p1.idade);

    printf("Quanto é seu salário: ");
    scanf("%f",&p1.salario);

    system("cls");
    system("clear");

    printf("Olá! %s! \nVocê tem %d anos\nE recebe o salário de R$%.2f\n",p1.nome,p1.idade,p1.salario);

    return 0;
}