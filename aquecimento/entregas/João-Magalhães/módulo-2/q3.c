#include <stdio.h>

// Função que inverte os elementos de um vetor
void inverteVetor(int vetor[], int tamanho) {
    int temp;
    for(int i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    printf("Vetor original: ");
    for(int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    inverteVetor(vetor, tamanho);

    printf("Vetor invertido: ");
    for(int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}
