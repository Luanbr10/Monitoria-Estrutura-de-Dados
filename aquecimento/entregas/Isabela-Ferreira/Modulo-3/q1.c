#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;
   
    printf("Valor de x:%d\n", x);
    printf("Endereco de x:%d\n", &x);
    printf("Valor de p:%d\n", p);
    printf("Valor apontado de p:%d\n", *p);

    printf("\n----------------------\n");

    return 0;


}