#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);

    int *vetor = NULL;
    vetor = (int *) malloc(tam * sizeof(int));

    for(int i = 0;i < tam; i++){
        printf("Digite o %dº elemento do vetor: ",i+1);
        scanf("%d",&vetor[i]);
    }

    printf("\n==- Vetor -==\n");

    for(int i = 0;i < tam;i++){
        printf("> %d\n",vetor[i]);
    }

    free(vetor);

}