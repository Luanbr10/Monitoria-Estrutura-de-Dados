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

int main() {
    int vetor[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    inverteVetor(vetor, 5);

    printf("\nVetor invertido:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
