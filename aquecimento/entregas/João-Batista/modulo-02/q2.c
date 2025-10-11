#include <stdio.h>

#define NUM_NOTAS 5

// Função para encontrar a maior nota no vetor
float encontrarMaiorNota(float notas[], int tamanho) {
    float maior = notas[0];
    for (int i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

// Função para encontrar a menor nota no vetor
float encontrarMenorNota(float notas[], int tamanho) {
    float menor = notas[0];
    for (int i = 1; i < tamanho; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}

// Função para calcular a média das notas
float calcularMedia(float notas[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main() {
    float notas[NUM_NOTAS];
    
    printf("Digite as %d notas da turma:\n", NUM_NOTAS);
    for (int i = 0; i < NUM_NOTAS; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Chama as funções para obter os resultados
    float maior = encontrarMaiorNota(notas, NUM_NOTAS);
    float menor = encontrarMenorNota(notas, NUM_NOTAS);
    float media = calcularMedia(notas, NUM_NOTAS);

    // Imprime os resultados
    printf("\n--- Análise da Turma ---\n");
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Média da turma: %.2f\n", media);

    return 0;
}