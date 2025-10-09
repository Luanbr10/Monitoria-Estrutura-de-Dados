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
    int n;


    printf("digite o numero:\n");
    scanf("%d",&n);
    printf("-------tabuada do %d-------\n",n);
    for(int i = 1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    printf("---------------------------\n");
}