#include <stdio.h>

/*
------------------------------------------------------------
Questão 3:
Crie uma função void inverteVetor(int vetor[], int tamanho)
que inverte a ordem dos elementos de um vetor.

Nome do arquivo: q3.c
------------------------------------------------------------
*/

void inverteVetor(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    inverteVetor(vetor, n);

    printf("\nVetor invertido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
