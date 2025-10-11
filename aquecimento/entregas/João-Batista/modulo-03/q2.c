#include <stdio.h>

// A função recebe os endereços de memória de duas variáveis inteiras.
void troca(int *a, int *b) {
    int temp; // Variável auxiliar para guardar um dos valores.

    // 1. Guarda o valor que está no endereço 'a' na variável 'temp'.
    temp = *a;
    
    // 2. Copia o valor que está no endereço 'b' para o endereço 'a'.
    *a = *b;
    
    // 3. Copia o valor que estava em 'a' (agora em 'temp') para o endereço 'b'.
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Valores ANTES da troca:\n");
    printf("num1 = %d, num2 = %d\n\n", num1, num2);

    // Chamamos a função 'troca' passando os ENDEREÇOS das variáveis
    // usando o operador '&'.
    troca(&num1, &num2);

    printf("Valores DEPOIS da troca:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}