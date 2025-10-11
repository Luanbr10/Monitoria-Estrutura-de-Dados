#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b){

    int aux = *b;
    *b = *a;
    *a = aux;

}

int main(){

    int a = 5;
    int b = 10;

    printf("a = %d\n",a);
    printf("b = %d\n",b);

    printf("=- TROCOU -=\n");
    troca(&a,&b);

    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}