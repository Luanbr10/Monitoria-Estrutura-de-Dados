#include <stdio.h>

int main() {

    int x = 42;
    int *p;
    p = &x;

    printf("Valor digitado da variavel x: %d\n", x);
    printf("Endereco de x (&x): %p\n", &x);
    printf("Valor digitadodo ponteiro p: %p\n", p);
    printf("Valor apontado por p (*p): %d\n", *p);
    
    return 0;
}