#include <stdio.h>

int main() {
    int anos, meses, dias, total_dias;

    printf("Digite a idade em anos, meses e dias:\n");

    printf("Anos: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    total_dias = (anos * 365) + (meses * 30) + dias;

    printf("\nA idade total em dias é: %d dias.\n", total_dias);

    return 0;
}