#include <stdio.h>

int main() {
    int x = 42;
    int *p;

    p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor de p (endereco para onde aponta): %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}