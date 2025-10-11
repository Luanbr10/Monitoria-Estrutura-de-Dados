#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Valores antes da troca:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    troca(&num1, &num2);

    printf("\nValores depois da troca:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}