#include <stdio.h>

// Função que retorna 1 se o número for primo, 0 caso contrário
int ehPrimo(int numero) {
    if(numero <= 1) return 0; // 0 e 1 não são primos
    for(int i = 2; i * i <= numero; i++) {
        if(numero % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(ehPrimo(n))
        printf("%d é primo!\n", n);
    else
        printf("%d nao é primo.\n", n);

    return 0;
}
