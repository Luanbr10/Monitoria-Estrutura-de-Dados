#include <stdio.h>

/**
 * @brief 
 * @param a 
 * @param b 
 */
void troca(int *a, int *b) {
   
    int tem;

    tem = *a;
    *a = *b;
    *b = tem;
}

int main() {
    int valor1 = 10;
    int valor2 = 20;

    printf("--- Antes da troca ---\n");
    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);
    
    troca(&valor1, &valor2);
    
    printf("\n--- Depois ---\n");
    printf("Valor 1: %d\n", valor1); 
    printf("Valor 2: %d\n", valor2);
    
    return 0;
}