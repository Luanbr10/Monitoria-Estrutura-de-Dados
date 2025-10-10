/*
    Questão 2: Faça um programa que leia 5 notas, armazene-as em um vetor e, 
    ao final, crie funções para imprimir a maior nota, a menor nota e a média da turma.
*/
#include <stdio.h>
#include <stdlib.h>

#define quantidade_notas 5

float achar_a_maior_nota_de_todas(float notas[], int tamanho) {

    float maior = notas[0];

    for (int i = 1; i < tamanho; i++) {

        if (notas[i] > maior) {

            maior = notas[i];
        }
    }
    return maior;
}

float achar_a_menor_nota_de_todas(float notas[], int tamanho) {

    float menor = notas[0];

    for (int i = 1; i < tamanho; i++) {

        if (notas[i] < menor) {

            menor = notas[i];

        }
    }
    return menor;
}


float calcular_media(float notas[], int tamanho) {

    float soma = 0.0;

    for (int i = 0; i < tamanho; i++) {

        soma += notas[i];
    }

    return soma / tamanho;
}

int main(){

    float notas[quantidade_notas];

    printf("Digite as %d notas da turma:\n", quantidade_notas);

    for (int i = 0; i < quantidade_notas; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\n--- Resultados ---\n");

    printf("A maior das notas dos alunos: %.2f\n", achar_a_maior_nota_de_todas(notas, quantidade_notas));
    printf("A menor nota dos alunos é: %.2f\n", achar_a_menor_nota_de_todas(notas, quantidade_notas));
    printf("A média da turma é igual a: %.2f\n", calcular_media(notas, quantidade_notas));

    return 0;
}

//mmaximus-bit :)