#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, area, perimetro;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);


    area = PI * raio * raio;
    perimetro = 2 * PI * raio;

    printf("\n--- Resultados ---\n");
    printf("Área do círculo: %.2f\n", area);
    printf("Perímetro do círculo: %.2f\n", perimetro);

    return 0;
}