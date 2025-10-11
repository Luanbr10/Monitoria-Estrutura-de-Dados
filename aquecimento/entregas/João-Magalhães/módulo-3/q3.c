#include <stdio.h>
#include <stdlib.h> // para malloc e free

int main() {
    int N;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    // Aloca dinamicamente
    vetor = (int*) malloc(N * sizeof(int));
    if(vetor == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1; // sai do programa
    }

    // Preenche o vetor
    for(int i = 0; i < N; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Imprime os valores
    printf("Valores do vetor: ");
    for(int i = 0; i < N; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    // Libera a memória
    free(vetor);

    return 0;
}
