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
    int idade_a,idade_m,idade_d;
    
    //vou considerar os meses tendo 30 dias sempre e anos tendo 365

    printf("quantos anos vc tem?\n");
    scanf("%d",&idade_a);
    printf("quantos meses?\n");
    scanf("%d",&idade_m);
    printf("e dias?\n");
    scanf("%d",&idade_d);

    idade_d += idade_a*365;
    idade_d += idade_m*30;

    printf("sua idade somente em dias é igual a %d\n",idade_d);

}