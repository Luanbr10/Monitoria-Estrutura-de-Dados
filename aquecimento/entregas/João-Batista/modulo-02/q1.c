#include <stdio.h>
#include <math.h>

// Função que verifica se um número é primo
// Retorna 1 se for primo, 0 caso contrário
int ehPrimo(int numero) {
    // Números menores ou iguais a 1 não são primos
    if (numero <= 1) {
        return 0;
    }
    // O número 2 é o único primo par
    if (numero == 2) {
        return 1;
    }
    // Se o número for par e maior que 2, não é primo
    if (numero % 2 == 0) {
        return 0;
    }
    // Verifica divisores ímpares a partir de 3 até a raiz quadrada do número
    for (int i = 3; i <= sqrt(numero); i += 2) {
        if (numero % i == 0) {
            return 0; // Encontrou um divisor, não é primo
        }
    }
    // Se não encontrou divisores, o número é primo
    return 1;
}

int main() {
    int num;

    printf("Digite um número inteiro para verificar se é primo: ");
    scanf("%d", &num);

    if (ehPrimo(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}