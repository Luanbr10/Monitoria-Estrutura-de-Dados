#include <stdio.h>

void resultados(float notas[]) {
   float maior = notas[0];
   float menor = notas[0];
   float media = 0;
   float soma = 0;

   for(int i = 0; i < 5; i++) {

    if (notas[i] > maior) {
       maior = notas[i];
    }   
    if (notas[i] < menor) {
       menor = notas[i];
    }

    soma = soma + notas[i];
       
   }
  
   media = soma / 5;

   printf("Maior nota: %.2f\n", maior);
   printf("Menor nota: %.2f\n", menor);
   printf("Media: %.2f\n", media);

   }

   int main() {
   float notas[5];

    printf("Digite a primeira nota:\n");
    scanf("%f", &notas[0]);
    
    printf("Digite a segunda nota:\n");
    scanf("%f", &notas[1]);
    
    printf("Digite a terceira nota:\n");
    scanf("%f", &notas[2]);
    
    printf("Digite a quarta nota:\n");
    scanf("%f", &notas[3]);
    
    printf("Digite a quinta nota:\n");
    scanf("%f", &notas[4]);

    resultados(notas);

    return 0;
    
   }