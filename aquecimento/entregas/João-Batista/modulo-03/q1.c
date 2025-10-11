#include <stdio.h>

int main() {
    int x = 42; // Declara uma variável inteira e a inicializa.
    int *p;     // Declara um ponteiro para um inteiro.

    p = &x; // Atribui o endereço de 'x' ao ponteiro 'p'. Agora, p "aponta" para x.

    printf("--- Demonstração de Ponteiros ---\n");

    // 1. Imprime o valor da variável x diretamente.
    printf("Valor de x: %d\n", x);

    // 2. Imprime o endereço de memória onde x está armazenado.
    // O especificador de formato %p é usado para imprimir endereços de memória.
    printf("Endereço de x (&x): %p\n", (void *)&x);

    // 3. Imprime o valor do ponteiro p. Será o mesmo endereço de x.
    printf("Valor de p (endereço que ele guarda): %p\n", (void *)p);

    // 4. Imprime o valor que está no endereço para o qual p aponta (*p).
    // Isso é chamado de "dereferenciar" o ponteiro.
    printf("Valor apontado por p (*p): %d\n", *p);
    
    return 0;
}