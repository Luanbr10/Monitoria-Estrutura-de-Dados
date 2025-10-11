#include <stdio.h>

/*
------------------------------------------------------------
Questão 2:
Leia 5 notas, armazene-as em um vetor e crie funções para
imprimir a maior nota, a menor nota e a média da turma.

Nome do arquivo: q2.c
------------------------------------------------------------
*/

#define TAM 5

float maiorNota(float notas[]) {
    float maior = notas[0];
    for (int i = 1; i < TAM; i++) {
        if (notas[i] > maior)
            maior = notas[i];
    }
    return maior;
}

float menorNota(float notas[]) {
    float menor = notas[0];
    for (int i = 1; i < TAM; i++) {
        if (notas[i] < menor)
            menor = notas[i];
    }
    return menor;
}

float mediaTurma(float notas[]) {
    float soma = 0;
    for (int i = 0; i < TAM; i++)
        soma += notas[i];
    return soma / TAM;
}

int main() {
    float notas[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\nMaior nota: %.2f", maiorNota(notas));
    printf("\nMenor nota: %.2f", menorNota(notas));
    printf("\nMedia da turma: %.2f\n", mediaTurma(notas));

    return 0;
}
