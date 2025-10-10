#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #define LIMPAR_TELA "cls"
#else
    #define LIMPAR_TELA "clear"
#endif

void limpar_buffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void troca_valor(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int a = 42, b = 44;

    printf("valor de a: %d\n", a);
    printf("endereço de b: %d\n", b);

    troca_valor(&a, &b);

    printf("valor de a: %d\n",a);
    printf("valor apontado por n: %d\n", b);

}
