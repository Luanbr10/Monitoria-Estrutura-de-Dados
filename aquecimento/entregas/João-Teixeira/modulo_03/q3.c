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

    printf("tamanho do vetor: \n");
    scanf("%d",&n);

    int *vetor = (int*) malloc(sizeof(int)*n);
    if(vetor == NULL){
        printf("ixi boy");
        exit(1);
    }


    for(int i = 0; i < n; i ++){
        printf("valor de %d: ",i+1);
        scanf("%d", &vetor[i]);
        printf("\n");
    }
    for(int i = 0; i < n; i ++){
        printf("valor de %d: %d",i+1, vetor[i]);
        printf("\n");
    }
    free(vetor);
}
