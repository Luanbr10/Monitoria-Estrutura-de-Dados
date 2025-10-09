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
    int n1,n2,n3,media=0;
    

    printf("nota 1:\n");
    scanf("%d",&n1);
    printf("nota 2:\n");
    scanf("%d",&n2);
    printf("nota 3:\n");
    scanf("%d",&n3);

    media = (n1 + n2 + n3)/3;
    system(LIMPAR_TELA);
    
    if(media>=7)
    printf("aprovado");
    if(media>=5)
    printf("recuperacao");
    if(media<5)
    printf("reprovado");

}