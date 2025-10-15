#include <stdio.h>

float maiorNota(float notas[], int tamanho) {
    int i;
    float maior = notas[0];
    for (i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

float menorNota(float notas[], int tamanho) {
    int i;
    float menor = notas[0];
    for (i = 1; i < tamanho; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}

float mediaNotas(float notas[], int tamanho) {
    int i;
    float soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main() {
    float notas[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\nMaior nota: %.2f\n", maiorNota(notas, 5));
    printf("Menor nota: %.2f\n", menorNota(notas, 5));
    printf("Média da turma: %.2f\n", mediaNotas(notas, 5));

    return 0;
}
