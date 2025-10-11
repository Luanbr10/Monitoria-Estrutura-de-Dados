#include <stdio.h>

/*
------------------------------------------------------------
Questão 1:
Crie uma função int ehPrimo(int numero) que retorna 1 se o
número for primo e 0 caso contrário. Use-a em um programa
principal para testar.

Nome do arquivo: q1.c
------------------------------------------------------------
*/

int ehPrimo(int numero) {
    if (numero <= 1) return 0;

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPrimo(n))
        printf("%d e primo.\n", n);
    else
        printf("%d nao e primo.\n", n);

    return 0;
}
