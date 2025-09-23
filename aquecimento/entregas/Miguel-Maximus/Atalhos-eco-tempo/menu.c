#include <stdio.h>


int main(){


    int opcao;


    do{

        printf("========AUMENTO SALARIAL========\n");
        printf("1.Cálcular Aumento Salarial.\n");
        printf("0.Sair Do Programa.\n");

        scanf("%d", &opcao);

        if(opcao == 0){

            break;
        }
        

    }

    while ( opcao != 0);


    return 0;

}