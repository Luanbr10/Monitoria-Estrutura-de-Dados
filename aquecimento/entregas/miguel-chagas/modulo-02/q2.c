#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[5];
    float media,aux;

    printf("Digite 5 notas: \n");
    
    for(int i = 0; i < 5; i++){
        printf("> ");
        scanf("%f",&notas[i]);
        media += notas[i] ;
    }

    for(int i = 0;i < 5; i++){
        for(int j = 0;j < 5; j++){
            if(notas[j] > notas[j + 1]){
                aux = notas[j];
                notas[j] = notas[j+1];
                notas[j+1] = j;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        printf("%d - %.2f\n",i,notas[i]);
    }

}