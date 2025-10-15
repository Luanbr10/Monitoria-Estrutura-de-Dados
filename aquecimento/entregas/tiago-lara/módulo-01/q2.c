#include <stdio.h>

int main() {
    char nome[100];
    char sexo;
    float salario;

    printf("Digite o nome completo do funcionário: ");
    fgets(nome, sizeof(nome), stdin); 

    printf("Digite o sexo (M/F): "); 
    scanf(" %c", &sexo); 

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("\n--- Dados do Funcionário ---\n");
    printf("Nome: %s", nome);       
    printf("Sexo: %c\n", sexo);
    printf("Salário: R$ %.2f\n", salario);

    return 0;
}
