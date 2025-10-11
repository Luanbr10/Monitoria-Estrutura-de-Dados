#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int numero){

    int divisiveis = 0;

    for(int i = 2;i <= numero;i++){
        if(numero % i == 0){
            divisiveis++;
        }
    }

    if(divisiveis == 1){
        return 1;
    } else {
        return 0;
    }

}

int main(){

    int n;

    printf("Digite um número: ");
    scanf("%d",&n);

    printf("O número %d é ",n);

    if(ehPrimo(n)){
        printf("PRIMO!\n");
    } else {
        printf("NÃO PRIMO!\n");
    }

    return 0;
}