#include <stdio.h>
#include <stdlib.h> // Biblioteca necessária para malloc() e free()

int main() {
    int *vetor; // Ponteiro que irá apontar para o início do nosso vetor dinâmico.
    int n;      // Variável para armazenar o tamanho do vetor.

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Alocação dinâmica de memória:
    // Tenta alocar um bloco de memória para 'n' elementos do tipo 'int'.
    // sizeof(int) calcula o tamanho em bytes de um único inteiro.
    vetor = (int*) malloc(n * sizeof(int));

    // Verificação da alocação:
    // Se malloc não conseguir alocar a memória (ex: memória insuficiente),
    // ele retorna NULL. É crucial verificar isso.
    if (vetor == NULL) {
        printf("Erro: Falha na alocação de memória!\n");
        return 1; // Retorna 1 para indicar que o programa terminou com um erro.
    }

    // Preenchimento do vetor
    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]); // A sintaxe vetor[i] é equivalente a *(vetor + i)
    }

    // Impressão dos valores do vetor
    printf("\nValores do vetor alocado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Liberação da memória alocada:
    // É fundamental liberar a memória que não será mais usada para
    // devolvê-la ao sistema operacional.
    free(vetor);
    printf("\nMemória liberada com sucesso.\n");

    return 0; // Sucesso
}