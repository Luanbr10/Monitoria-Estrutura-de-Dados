
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor preenchido:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
