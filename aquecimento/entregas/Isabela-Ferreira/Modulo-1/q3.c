#include <stdio.h>

int main() {
    
    float π = 3.14;
    float r;
    float area, perimetro;

    printf("Digite raio: ");
    scanf("%f", &r);

    area = r * r *  π;
    perimetro = 2 * r * π;

    printf("Area:%.2f\n",area);
    printf("Perimetro:%.2f\n", perimetro);

    return 0;

}