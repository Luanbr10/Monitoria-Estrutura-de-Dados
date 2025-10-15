#include <stdio.h>

int main() {
    int N, i;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &N);

    printf("\n--- Tabuada de %d ---\n", N); 
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
