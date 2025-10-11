#include <stdio.h>

/*
------------------------------------------------------------
Questão 5:
Imprima a tabuada de um número N (de 1 a 10),
onde N é fornecido pelo usuário.
------------------------------------------------------------
*/

int main() {
    int n;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &n);

    printf("\nTabuada do %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
