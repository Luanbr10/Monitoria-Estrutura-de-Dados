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

int ehPrimo(int n){
    for(int i = 0;i<n;i++){
        if(n % i ==0)
        return 1;
    }
    return 0;
}

void main(){
    int n;


    printf("digite o numero:\n");
    scanf("%d",&n);
    if (ehPrimo(n)==1){
        printf("%d é primo",n);
    }else{
        printf("%d nao é primo",n);
    }

}