#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[5];
    float media = 0.0;
    float aux;

    printf("Digite 5 notas: \n");
    
    for(int i = 0; i < 5; i++){
        printf("> ");
        scanf("%f",&notas[i]);
        media += notas[i];
    }

    media = media / 5;

    for(int i = 0;i < 5; i++){
        for(int j = 1;j < 5; j++){
            if(notas[j] < notas[j - 1]){
                aux = notas[j - 1];
                notas[j - 1] = notas[j];
                notas[j] = aux;
            }
        }
    }

    printf("A maior nota é: %.2f\n",notas[4]);
    printf("A menor nota é: %.2f\n",notas[0]);
    printf("E a média é: %.2f\n",media);

}