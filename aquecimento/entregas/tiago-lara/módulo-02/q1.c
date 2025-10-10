#include <stdio.h>

int ehPrimo(int numero) {
    int i;
    if (numero <= 1) {
        return 0;
    }
    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (ehPrimo(n)) {
        printf("%d é primo\n", n);
    } else {
        printf("%d não é primo\n", n);
    }

    return 0;
}
