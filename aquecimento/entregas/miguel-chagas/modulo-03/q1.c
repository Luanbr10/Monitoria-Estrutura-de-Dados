#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 42;
    int *p = &x;

    printf("x = %d\n",x);
    printf("Endereço de X = %p\n",&x);

    printf("p = %p\n",p);
    printf("Onde p aponta = %d\n",*p);

    return 0;
}