#include <stdio.h>

int main() {

    int idade, ano, dias, meses;

    printf("Digite sua idade, anos, meses e dias:\n ");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite os meses: ");
    scanf("%d", &meses);
    printf("Digite os dias: ");
    scanf("%d", &dias);

    ano = idade * 365 + meses * 30 + dias;
    printf("Sua idade em dias e: %d\n", ano);







    return 0;
}