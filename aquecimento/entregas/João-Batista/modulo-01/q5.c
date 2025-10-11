#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &n);

    printf("\n--- Tabuada do %d ---\n", n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}