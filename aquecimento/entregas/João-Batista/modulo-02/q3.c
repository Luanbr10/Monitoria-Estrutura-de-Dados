#include <stdio.h>

// Função para imprimir os elementos de um vetor
void imprimeVetor(int vetor[], int tamanho) {
    printf("[ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");
}

// Função que inverte a ordem dos elementos de um vetor
void inverteVetor(int vetor[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    int temp; // Variável temporária para a troca (swap)

    while (inicio < fim) {
        // Troca os elementos das posições 'inicio' e 'fim'
        temp = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = temp;

        // Move os ponteiros para o centro do vetor
        inicio++;
        fim--;
    }
}

int main() {
    int meuVetor[] = {10, 20, 30, 40, 50, 60};
    int tamanho = sizeof(meuVetor) / sizeof(meuVetor[0]);

    printf("Vetor original: ");
    imprimeVetor(meuVetor, tamanho);

    // Chama a função para inverter o vetor
    inverteVetor(meuVetor, tamanho);

    printf("Vetor invertido: ");
    imprimeVetor(meuVetor, tamanho);

    return 0;
}