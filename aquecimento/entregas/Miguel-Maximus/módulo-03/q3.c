//Questão 3:** Faça um programa que pergunte ao usuário o tamanho `N`. 
//Aloque dinamicamente um vetor de `N` inteiros, preencha-o, imprima seus valores com um for, e no final, libere a memória alocada com `free()`. Quero que você faça a verificação da alocação, pode fazer com malloc 
//ou calloc, caso tenha dúvida nessa atividade, pode me mandar mensagem, ou olhar o gabarito, sem copiar.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    vetor = (int *)malloc(N * sizeof(int));

    if (vetor == NULL) {
        printf("Erro: Falha na alocacao de memoria.\n");
        return 1;
    }

    printf("Digite os %d elementos do vetor:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores do vetor alocado:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}

//mmaximus-bit :)