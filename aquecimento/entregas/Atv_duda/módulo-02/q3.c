#include <stdio.h>
#define LIMPAR_TELA "clear"

/**
 * @brief
 * @param vetor
 * @param tamanho 
 */
void inverteVetor(int vetor[], int tamanho) {

    int temp;

    for (int i = 0; i < tamanho / 2; i++) {
  
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

/**
 * @brief 
 */
void imprimeVetor(int vetor[], int tamanho) {
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    
    int vetor1[] = {1, 2, 3, 4, 5};
    int tamanho1 = 5;

    printf("--- Ex: 1 ---\n");
    printf("Vetor original: ");
    imprimeVetor(vetor1, tamanho1);
    
    inverteVetor(vetor1, tamanho1);
    
    printf("Vetor invertido: ");
    imprimeVetor(vetor1, tamanho1);
    
    printf("\n");

    int vetor2[] = {10, 20, 30, 40};
    int tamanho2 = 4;

    printf("--- Ex: 2 ---\n");
    printf("Vetor original: ");
    imprimeVetor(vetor2, tamanho2);
    
    inverteVetor(vetor2, tamanho2);
    
    printf("Vetor invertido: ");
    imprimeVetor(vetor2, tamanho2);

    return 0;
}