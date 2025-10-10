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
    float raio,perimetro,area;


    printf("raio:\n");
    scanf("%f",&raio);

    area = 3.14 * (raio*raio);
    perimetro = 2 * 3.14 * raio;

    system(LIMPAR_TELA);
    
    printf("raio: %.2f\n",raio);
    printf("area: %.2f\n",area);
    printf("perimetro: %.2f\n",perimetro);

}