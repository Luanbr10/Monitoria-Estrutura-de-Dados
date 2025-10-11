#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;

    printf("Digite o tamanho N: ");
    scanf("%d", &N);

    int *vetor = (int*) malloc(N * sizeof(int));

    if (vetor == NULL) {
        return 1;
    }
    
    for(i = 0; i < N; i++) {
        printf("Digite o valor para posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Valores do vetor: \n");
    for(i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
}

printf("\n================================\n");

free(vetor);

return 0;

}