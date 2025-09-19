#include <stdio.h>

int main() {
    char nomeCompleto[100];
    char sexo;
    float salario;

    printf("Digite o nome completo: ");
    scanf(" %[^\n]", nomeCompleto); // Pode usar com o fgets, mas você tem retirar o \n.
    
    /*
    inclua a biblioteca <stdlib.h>
    e após pedir para o usuário escrever o seu nome, remova com 
    nomeCompleto[strcspn(nomeCompleto, "\n")] = '\0'
    */

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite o salario: R$ ");
    scanf("%f", &salario);

    printf("\n--- Dados do Funcionario ---\n");
    printf("Nome: %s\n", nomeCompleto);
    printf("Sexo: %c\n", sexo);
    printf("Salario: R$ %.2f\n", salario);

    return 0;
}