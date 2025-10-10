#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[3];
    float media;

    printf("Digite 3 notas: \n");
    
    for(int i = 0; i < 3; i++){
        printf("> ");
        scanf("%f",&notas[i]);
        media += notas[i] ;
    }

    media = media / 3;

    printf("A média das notas é %.2f\n",media);

    return 0;
}