//Questão 1:** Declare uma variável `int x = 42;` 
//e um ponteiro `int *p;`. Faça `p` apontar para `x`. Imprima o valor de `x`, o endereço 
//de `x`, o valor de `p` e o valor apontado por `p`.

#include <stdio.h>

int main() {
    int x = 42;
    int *p;

    p = &x;

    printf("Valor de x: %d\n", x);

    printf("Endereço de x: %p\n", &x);

    printf("Valor de p (endereço para onde ele vai apontar): %p\n", p);
    
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}

//mmaximus-bit :)