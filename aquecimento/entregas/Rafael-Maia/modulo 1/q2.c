#include <stdio.h>

/*
------------------------------------------------------------
Questão 2:
Faça um programa que leia o nome completo, o sexo (char) e o
salário de um funcionário e imprima os dados formatados.
O salário deve ser mostrado com duas casas decimais (%.2f).

------------------------------------------------------------
*/

int main() {
    char nome[100];
    char sexo;
    float salario;

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("\n=== Dados do Funcionario ===\n");
    printf("Nome: %s", nome);
    printf("Sexo: %c\n", sexo);
    printf("Salario: R$ %.2f\n", salario);

    return 0;
}
