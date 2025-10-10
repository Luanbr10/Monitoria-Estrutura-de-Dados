//Questão 2:** Crie uma função `void troca(int *a, int *b)` que recebe o endereço de 
//duas variáveis e troca os valores entre elas. Teste-a na `main`. 
//Caso não tenha percebido, quero que faça com ponteiro, então você deve acessar o enredeço de memória da variável.

#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Valores antes de trocar os dois valores:\n");

    printf("num1 = %d, num2 = %d\n", num1, num2);

    troca(&num1, &num2);

    printf("\nValores depois de trocar todos os valores:\n");
    
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

//mmaximus-bit :)