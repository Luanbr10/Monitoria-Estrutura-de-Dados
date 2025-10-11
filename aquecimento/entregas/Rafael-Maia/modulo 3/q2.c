#include <stdio.h>

/*
------------------------------------------------------------
Questão 2:
Crie uma função void troca(int *a, int *b) que recebe o
endereço de duas variáveis e troca os valores entre elas.
Teste a função na main.

------------------------------------------------------------
*/

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
