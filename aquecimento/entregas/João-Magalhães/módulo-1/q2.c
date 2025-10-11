#include <stdio.h>

int main() {
    char nome[100];   // armazena o nome completo
    char sexo;        // armazena o sexo (M/F)
    float salario;    // armazena o salário

    // Lê o nome completo
    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin); // lê inclusive espaços no nome

    // Lê o sexo
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo); // espaço antes do %c pra ignorar o Enter anterior

    // Lê o salário
    printf("Digite o salario: ");
    scanf("%f", &salario);

    // Exibe os dados formatados
    printf("\n--- Dados do Funcionario ---\n");
    printf("Nome: %s", nome);
    printf("Sexo: %c\n", sexo);
    printf("Salario: R$ %.2f\n", salario);

    return 0;
}
