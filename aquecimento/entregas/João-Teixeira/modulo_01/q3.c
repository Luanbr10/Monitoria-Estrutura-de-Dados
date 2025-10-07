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
    int raio,perimetro,area;
    
    //vou considerar os meses tendo 30 dias sempre e anos tendo 365

    printf("raio:\n");
    scanf("%d",&raio);

    area = 3,14 * (raio*raio);
    perimetro = 2 * 3,14 * raio;

    system(LIMPAR_TELA);
    
    printf("raio: %d\n",raio);
    printf("area: %d\n",area);
    printf("perimetro: %d\n",perimetro);

}