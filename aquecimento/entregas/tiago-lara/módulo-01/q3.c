#include <stdio.h>

int main() {
    const float pi = 3.14159;  
    float raio, area, perimetro;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    printf("\n--- Resultados ---\n"); 
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);

    return 0;
}
