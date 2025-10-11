/*
    Questão 5:
    Faça um programa que imprima a tabuada de 
    um número N (de 1 a 10), onde N é fornecido pelo usuário.
*/

#define LIMPAR_TELA "clear"

#include<stdio.h>
#include<stdlib.h>

int main(){

    system(LIMPAR_TELA);

    int num;

    printf("Digite o número para ver sua tabuada: ");
    scanf("%d", &num);

    printf("=====TABUADA DE %d=====\n", num);

    for(int i = 0; i < 10; i++){

        printf("%d X %d = %d \n", num, i + 1, num * (i +1) );

    }

    return 0;

}

