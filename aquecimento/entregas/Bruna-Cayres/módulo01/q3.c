/*
    Questão 3: 
    Faça um programa que leia o raio de um círculo e 
    calcule sua área (`π * r²`) e seu perímetro (`2 * π * r`).
*/
#define LIMPAR_TELA "clear"

#include <stdio.h>
#include <stdlib.h>

int main(){

    system(LIMPAR_TELA);

    float pi = 3.14, r, area, perimetro;

    printf("Digite o valor do raio no seu círculo: ");
    scanf("%f", &r);

    area = (pi * (r*r));

    perimetro = (2 * pi * r);

    printf("O valor da área do círculo é %.2f e seu perimetro é %.2f\n", area, perimetro);

    return 0;
}
