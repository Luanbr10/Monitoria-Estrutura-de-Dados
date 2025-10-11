#include <stdio.h>

int main() {
    int anos, meses, dias, idade_em_dias;

    // Lê os valores
    printf("Digite sua idade em anos: ");
    scanf("%d", &anos);

    printf("Digite os meses: ");
    scanf("%d", &meses);

    printf("Digite os dias: ");
    scanf("%d", &dias);

    // Calcula a idade total em dias
    idade_em_dias = anos * 365 + meses * 30 + dias;

    // Exibe o resultado
    printf("Sua idade em dias é: %d\n", idade_em_dias);

    return 0;
}
