#include <stdio.h>

#define TAM 5

// Função que retorna a maior nota
float maiorNota(float notas[], int tamanho) {
    float maior = notas[0];
    for(int i = 1; i < tamanho; i++) {
        if(notas[i] > maior)
            maior = notas[i];
    }
    return maior;
}

// Função que retorna a menor nota
float menorNota(float notas[], int tamanho) {
    float menor = notas[0];
    for(int i = 1; i < tamanho; i++) {
        if(notas[i] < menor)
            menor = notas[i];
    }
    return menor;
}

// Função que calcula a média
float mediaNotas(float notas[], int tamanho) {
    float soma = 0;
    for(int i = 0; i < tamanho; i++)
        soma += notas[i];
    return soma / tamanho;
}

int main() {
    float notas[TAM];

    printf("Digite 5 notas:\n");
    for(int i = 0; i < TAM; i++)
        scanf("%f", &notas[i]);

    printf("Maior nota: %.2f\n", maiorNota(notas, TAM));
    printf("Menor nota: %.2f\n", menorNota(notas, TAM));
    printf("Media da turma: %.2f\n", mediaNotas(notas, TAM));

    return 0;
}
