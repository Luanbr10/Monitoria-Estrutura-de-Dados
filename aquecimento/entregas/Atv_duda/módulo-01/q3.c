#include <stdio.h>
#define PI 3.14159265358979323846 

int main() {
  
    double raio;

    printf("--- Calculadora de Circulo ---\n");
    printf("Digite o valor do raio do circulo: ");
    
    if (scanf("%lf", &raio) != 1 || raio < 0) {
        printf("Erro: Por favor, insira um valor de raio valido.\n");
        return 1;

    }
    double area = PI * raio * raio; 
    
    double perimetro = 2.0 * PI * raio;

    printf("\n--- Resultados ---\n");
    printf("Raio fornecido: %.2lf\n", raio);
  
    printf("Area do Circulo:      %.2lf\n", area);
    printf("Perimetro: %.2lf\n", perimetro);
    printf("--------------------\n");

    return 0; 
}