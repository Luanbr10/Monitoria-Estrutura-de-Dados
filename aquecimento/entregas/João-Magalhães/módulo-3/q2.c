#include <stdio.h>

// Função que troca os valores de duas variáveis usando ponteiros
void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);

    troca(&num1, &num2); // passa os endereços

    printf("Depois da troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
