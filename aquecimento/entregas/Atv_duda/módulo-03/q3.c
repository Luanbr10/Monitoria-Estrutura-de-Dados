#include <stdio.h>
#include <stdlib.h> 
#define LIMPAR_TELA "clear"

int main() {
    int N;
    int *vetor; 

    printf("Digite o tamanho (N) do vetor: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        fprintf(stderr, "Erro: Tamanho invalido. O programa sera encerrado.\n");
        return 1; 
    }


    vetor = (int *)malloc(N * sizeof(int));
    if (vetor == NULL) {
       
        fprintf(stderr, "Erro: Falha na alocacao de memoria.\n");
        return 1; 
    }

    printf("\nPreenchendo o vetor:\n");
    for (int i = 0; i < N; i++) {
        
        vetor[i] = (i + 1) * 10;
        printf("Elemento[%d] = %d\n", i, vetor[i]);
    }

    printf("\nValores do vetor alocado (tamanho %d):\n", N);
    printf("[");
    for (int i = 0; i < N; i++) {
        printf("%d", vetor[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    free(vetor);
    printf("\nMemoria liberada com sucesso.\n");
    
    vetor = NULL;

    return 0; 
}