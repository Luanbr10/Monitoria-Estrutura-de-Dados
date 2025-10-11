/*
    Questão 2:** Faça um programa que leia o nome completo, o sexo (`char`) e 
    o salário de um funcionário e imprima os dados formatados,
    imprimir o salario com duas casas decimais, use `%.2f`.
*/

#define LIMPAR_TELA "clear"

#include <stdio.h>
#include <stdlib.h>


int main (){

    system(LIMPAR_TELA);

    char nome[100], sexo[50];
    float salario;

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Qual é o seu sexo? M/F: ");
    fgets(sexo,sizeof(sexo),stdin);

    printf("Digite seu salário em Reais: R$ ");
    scanf("%f",&salario);

    printf("=====DADOS DO FUNCIONÁRIO=====\n");
    printf("NOME COMPLETO: %s", nome);
    printf("SEXO: %s", sexo);
    printf("SALÁRIO: R$%.2f\n", salario);

    return 0;
}