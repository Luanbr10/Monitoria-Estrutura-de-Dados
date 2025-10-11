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
    if(n <= 0){
        return 2;
    }
    for(int i = 2;i<n;i++){
        if(n % i ==0)
        return 0;
    }
    return 1;
}

void main(){
    int n;


    printf("digite o numero:\n");
    scanf("%d",&n);
    system(LIMPAR_TELA);
    if(ehPrimo(n)==2){
        printf("%d é negativo ou igual a zero entao nao pode ser primo.");
    }else if (ehPrimo(n)==1){
        printf("%d é primo",n);
    }else{
        printf("%d nao é primo",n);
    }

}