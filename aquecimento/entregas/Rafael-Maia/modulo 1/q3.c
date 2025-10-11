#include <stdio.h>
#include <math.h>

/*
------------------------------------------------------------
Questão 3:
Leia o raio de um círculo e calcule sua área (π * r²)
e seu perímetro (2 * π * r).

------------------------------------------------------------
*/

int main() {
    float raio, area, perimetro;
    const float PI = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    perimetro = 2 * PI * raio;

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}
