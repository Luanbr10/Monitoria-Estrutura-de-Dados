#include <stdio.h>

/*
------------------------------------------------------------
Questão 1:
Declare uma variável int x = 42; e um ponteiro int *p;
Faça p apontar para x. Imprima o valor de x, o endereço de x,
o valor de p e o valor apontado por p.

------------------------------------------------------------
*/

int main() {
    int x = 42;
    int *p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", (void*)&x);
    printf("Valor de p (endereco armazenado): %p\n", (void*)p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}
