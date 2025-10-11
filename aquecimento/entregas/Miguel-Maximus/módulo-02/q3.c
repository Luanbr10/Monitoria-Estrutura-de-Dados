



#include <stdio.h>

void troca_vetor(int vetor[], int tamanho) {
    int comeco = 0;

    int final = tamanho - 1;

    int temp;

    while (comeco < final) {

        temp = vetor[comeco];

        vetor[comeco] = vetor[final];

        vetor[final] = temp;

        comeco++;

        final--;
    }
}

void mostra_matriz(int vetor[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);

    }

    printf("\n");
}

int main() {
    int matriz[] = {10, 20, 30, 40, 50, 60};
    int tamanho = sizeof(matriz) / sizeof(matriz[0]);

    printf("Matriz original: ");

    mostra_matriz(matriz, tamanho);

    troca_vetor(matriz, tamanho);

    printf("Vetor invertido: ");

    mostra_matriz(matriz, tamanho);

    return 0;

}

//mmaximus-bit :)