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

void inverteVetor(int vetor[], int tamanho){
    int temp;
    for(int i = 0;i<tamanho/2;i++){
        temp = vetor[i];
        vetor[i] = vetor[tamanho-(i+1)];
        vetor[tamanho-(i+1)] = temp;
    }
    for(int i = 0; i<tamanho;i++){
        printf("elemento %d: %d\n",i+1,vetor[i]);
    }
}

void main(){
    int tamanho;
    printf("tamanho da array:\n");
    scanf("%d",&tamanho);
    int n[tamanho];


    for(int i = 0;i<tamanho;i++){
        printf("digite o elemento %d:\n",i+1);
        scanf("%d",&n[i]);
    }
    inverteVetor(n, tamanho);

}