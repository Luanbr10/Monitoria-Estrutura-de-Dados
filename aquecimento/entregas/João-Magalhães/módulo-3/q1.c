#include <stdio.h>

int main() {
    int x = 42;      // variável inteira
    int *p;          // ponteiro para inteiro

    p = &x;          // ponteiro aponta para x

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", (void*)&x);
    printf("Valor de p (endereco armazenado): %p\n", (void*)p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}
