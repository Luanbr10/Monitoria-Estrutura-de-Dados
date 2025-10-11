#include <stdio.h>

int main() {
    int i;
    int resultado, N;

    printf("--- Tabuada ---\n");
    printf("Digite o numero que você deseja ver a tabuada: ");
    

    if (scanf("%d", &N) != 1) {
        printf("Erro na leitura. Por favor, insira um numero inteiro valido.\n");
        return 1;
    }

    printf("\n--- Tabuada de %d ---\n", N);

    for (i = 1; i <= 10; i++) {
        resultado = N * i;
    
        printf("%2d x %2d = %3d\n", N, i, resultado);
    }
    
    printf("---------------------------\n");

    return 0; 
}