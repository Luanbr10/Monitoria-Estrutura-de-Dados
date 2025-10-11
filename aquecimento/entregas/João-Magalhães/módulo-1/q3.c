#include <stdio.h>
#define PI 3.14159  // define o valor de π

int main() {
    float raio, area, perimetro;

    // Lê o raio
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    // Calcula a área e o perímetro
    area = PI * raio * raio;
    perimetro = 2 * PI * raio;

    // Exibe os resultados formatados
    printf("\n--- Dados do Circulo ---\n");
    printf("Raio: %.2f\n", raio);
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}
