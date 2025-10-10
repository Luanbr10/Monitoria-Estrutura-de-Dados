#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceiro nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;


    if(media < 5){
        printf("reprovado\n");
    }
    else if(media >= 5 && media < 7){
        printf("recuperacao\n");
    
    } else { 
        printf("aprovado\n");
    }

    return 0;
   
}