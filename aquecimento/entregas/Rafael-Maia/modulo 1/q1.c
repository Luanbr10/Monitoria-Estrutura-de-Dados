#include <stdio.h>

/*
------------------------------------------------------------
Questão 1:
Faça um programa que leia a idade de uma pessoa em anos, meses
e dias e a expresse apenas em dias.

------------------------------------------------------------
*/

int main() {
    int anos, meses, dias, total_dias;

    printf("Digite sua idade em anos: ");
    scanf("%d", &anos);

    printf("Digite os meses: ");
    scanf("%d", &meses);

    printf("Digite os dias: ");
    scanf("%d", &dias);

    total_dias = (anos * 365) + (meses * 30) + dias;

    printf("Sua idade em dias e: %d\n", total_dias);

    return 0;
}
