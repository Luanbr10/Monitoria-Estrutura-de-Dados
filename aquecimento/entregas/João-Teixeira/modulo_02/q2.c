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
    int maior = n[0],menor = n[0],media=0;
    for(int i = 0;i<5;i++){
        if(maior<n[i])
        maior=n[i];
        if(menor>n[i])
        menor=n[i];
        media+=n[i];
        media = media/5;
    }
    system(LIMPAR_TELA);
    printf("a menor nota é %d\n",menor);
    printf("a maior nota é %d\n",maior);
    printf("a media das notas é %d\n",media);
}

void main(){
    int n[5];


    for(int i = 0;i<5;i++){
        printf("digite a %d nota:\n",i+1);
        scanf("%d",&n[i]);
    }
    maior_menor_media(n);

}