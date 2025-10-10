#include <stdio.h>
#include <string.h>

int main() {

   float salario;
   char nome[50];
   char sexo;

    printf("Digite seu sexo (M/F): ");
    scanf("%c", &sexo);
    getchar();
    
    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin); // Usando fgets para ler o nome completo

    nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha lido pelo fgets

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Nome: %s\n", nome);
    printf("Salario: %.2f\n", salario);
    printf("Sexo: %c\n", sexo);
   

    return 0;
}