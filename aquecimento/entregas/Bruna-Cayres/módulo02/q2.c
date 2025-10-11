#include <stdio.h>

#define quantidade_notas 5

float encontrarMaiorNota(float notas[], int tamanho) {
    float maior = notas[0];
    for (int i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

float encontrarMenorNota(float notas[], int tamanho) {
    float menor = notas[0];
    for (int i = 1; i < tamanho; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}

float calcularMedia(float notas[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main() {
    float notas[quantidade_notas];

    printf("Digite as %d notas da turma:\n", quantidade_notas);
    for (int i = 0; i < quantidade_notas; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\n--- Resultados ---\n");
    printf("Maior nota: %.2f\n", encontrarMaiorNota(notas, quantidade_notas));
    printf("Menor nota: %.2f\n", encontrarMenorNota(notas, quantidade_notas));
    printf("Media da turma: %.2f\n", calcularMedia(notas, quantidade_notas));

    return 0;
}