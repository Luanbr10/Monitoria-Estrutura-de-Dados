#include <stdio.h>

void inverteVetor(int vetor[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    int temp;

    while (inicio < fim) {
        temp = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = temp;
        inicio++;
        fim--;
    }
}

void imprimeVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int meuVetor[] = {10, 20, 30, 40, 50, 60};
    int tamanho = sizeof(meuVetor) / sizeof(meuVetor[0]);

    printf("Vetor original: ");
    imprimeVetor(meuVetor, tamanho);

    inverteVetor(meuVetor, tamanho);

    printf("Vetor invertido: ");
    imprimeVetor(meuVetor, tamanho);

    return 0;
}