/*

    Questão 4:
    Faça um programa que leia 3 notas, calcule a média 
    e imprima "Aprovado", "Recuperação" ou "Reprovado" (média >= 7, >= 5, < 5).

*/

#define LIMPAR_TELA "clear"

#include<stdio.h>
#include<stdlib.h>

int main(){

    system(LIMPAR_TELA);

    int i;
    float nota[3], soma = 0, media;

    for( i = 0; i < 3; i++){

        printf("Digite a %d° nota: ", i + 1);
        scanf("%f", &nota[i]);

        soma += nota[i];
    }

    media = soma /3;


    if(media < 5){

        printf("Infelizmente você foi reprovado sua média foi %.2f", media);

    } else if((media >= 5) && media < 7){

        printf("Você está de recuperação sua média foi %.2f", media);

    }else if (media >= 7){

        printf("Parabéns você foi aprovado sua média foi %.2f", media);
    }


    return 0;
}

//mmaximus-bit :)