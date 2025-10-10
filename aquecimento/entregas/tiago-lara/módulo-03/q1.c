#include <stdio.h>

int main() {
    int x = 42;
    int *p;

    p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", (void*)&x);
    printf("Valor de p (endereço armazenado): %p\n", (void*)p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}
