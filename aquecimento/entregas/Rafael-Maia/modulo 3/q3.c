#include <stdio.h>
#include <stdlib.h>

/*
------------------------------------------------------------
Questão 3:
Pergunte ao usuário o tamanho N. Aloque dinamicamente um vetor
de N inteiros, preencha-o, imprima seus valores com um for e,
no final, libere a memória alocada com free().

------------------------------------------------------------
*/

int main() {
    int *vetor;
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o valor do elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores digitados:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
