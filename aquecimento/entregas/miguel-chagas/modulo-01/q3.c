#include <stdio.h>
#include <stdlib.h>

int main(){

    float raio;

    printf("Digite o raio do seu círculo: ");
    scanf("%f",&raio);

    printf("O diâmetro do seu círculo então vai ser: %.2f\n",raio * 2);
    printf("Sendo assim, a área dele é: %.2f\n",(raio * raio) * 3.14);
    printf("E então seu diâmetro é: %.2f\n",raio * 2 * 3.14);

    return 0;
}