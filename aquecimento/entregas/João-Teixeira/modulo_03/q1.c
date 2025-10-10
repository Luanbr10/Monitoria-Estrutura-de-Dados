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

void main(){
    int x = 42;
    int *p = &x;
    printf("valor de x: %d\n" , x);
    printf("endereço de x: %d\n", &x);
    printf("valor de p: %d\n",p);
    printf("valor apontado por p: %d\n", *p);

}
