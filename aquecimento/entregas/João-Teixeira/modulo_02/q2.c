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

void maior_menor_media(int n[5]){
    int maior,menor,media=0;
    for(int i = 0;i<n;i++){
        if(maior<n[i])
        maior=n[i];
        if(menor>n[i])
        menor=n[i];
        media+=n[i];
        media = media/5;
    }
    printf("a menor nota é %d",menor);
    printf("a maior nota é %d",maior);
    printf("a media das notas é %d",media);
}

void main(){
    int n[5];


    for(int i = 0;i<n;i++){
        printf("digite a %d nota:\n",i);
        scanf("%d",n[i]);
    }
    maior_menor_media(n[5]);

}