#include <stdio.h>
#include <stdlib.h>

void inverteVetor(int vetor[], int tamanho){

    int aux;

    for(int i = 0; i < tamanho / 2; i++){
        // 8 7 6 5
        // 5 6 7 8
    
        aux = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = aux;

    }
}

int main(){

    int v[4] = {1,2,3,4};

    inverteVetor(v,4);

    for(int i = 0; i < 4;i++){
        printf("> %d\n",v[i]);
    }

    return 0;
}