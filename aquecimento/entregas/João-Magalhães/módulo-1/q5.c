#include <stdio.h>

int main() {
    int n, i;

    // Lê o número
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &n);

    // Imprime a tabuada de 1 a 10
    printf("\n--- Tabuada do %d ---\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
