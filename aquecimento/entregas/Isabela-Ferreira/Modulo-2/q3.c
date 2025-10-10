#include <stdio.h>

void inverteVetor(int vetor[], int tamanho) {
    int temp, i;
    for(int i = 0; i < tamanho/2; i++) {
      temp = vetor[i];
      vetor[i] = vetor[tamanho - (i + 1)];
      vetor[tamanho - (i + 1)] = temp;

    }

    for(int i = 0; i < tamanho; i++) {
        printf("Elemento %d: %d\n", i, vetor[i]);
    }
}

int main() {
    int tamanho;
    
    printf("Array: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    for(int i; i < tamanho; i++) {
        printf("Digite o elemento %d:\n", i);
        scanf("%d",&vetor[i]);
    }

    inverteVetor(vetor, tamanho);


}
    
