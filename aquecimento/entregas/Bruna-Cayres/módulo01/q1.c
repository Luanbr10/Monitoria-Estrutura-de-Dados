/*

    Questão 1:** Faça um programa que leia a idade de uma pessoa 
    em anos, meses e dias e a expresse apenas em dias.
    
*/


    #define LIMPAR_TELA "clear"


#include <stdio.h>
#include <stdlib.h>

int main(){

    system(LIMPAR_TELA);

    int dias, meses, anos, total_dias;

    printf("Digite sua idade em anos, meses e dias.");

    printf("Digite primeiro em anos: ");
    scanf("%d", &anos);

    printf("Agora os meses: ");
    scanf("%d", &meses);

    printf("Digite agora os dias: ");
    scanf("%d", &dias);

    total_dias = ((anos * 365) + (meses * 30) + dias);

    printf("Você vive há %d dias aqui! Parabéns.\n", total_dias);

    return 0;
}
