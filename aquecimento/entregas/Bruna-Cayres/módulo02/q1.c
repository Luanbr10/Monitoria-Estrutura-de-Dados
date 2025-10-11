#include <stdio.h>

int ehPrimo(int numero){
    if (numero <= 1){
        return 0; // Aceitar somente numero possitivos maiores que 1
    }

    int contador_divisores = 0;

    for (int i = 1; i <= numero; i++){
        if (numero % i == 0){
            contador_divisores++;
        }
    }
    
    if (contador_divisores == 2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (ehPrimo(num)){
        printf("O numero eh primo\n");
    }
    else{
        printf("Não é primo\n");    
    }
}