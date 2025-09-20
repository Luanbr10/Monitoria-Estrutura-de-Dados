#include <stdio.h>
#include <stdlib.h>

// Não dá 

void main(){

    int dia = 0,mes = 0,ano = 0;

    printf("Digite a sua data de nascimento!\n");

    printf("Dia: ");
    scanf("%d",&dia);

    printf("Mes: ");
    scanf("%d",&mes);
    
    printf("Ano: ");
    scanf("%d",&ano);

    int tempoTotal = dia + (mes * 30) + ((2025 - ano) * 365);

    printf("\nVocê nasceu %d dias atrás!",tempoTotal);
}