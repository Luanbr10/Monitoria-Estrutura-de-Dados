#include <stdio.h>
#define LIMPAR_TELA "clear"
/**
 * @brief Verifica se um número inteiro é primo.
 * @param numero O número inteiro a ser testado.
 * @return int Retorna 1 se o número for primo e 0 caso contrário.
 */
int Primo(int numero) {
    
    if (numero <= 1) {
        return 0; 
    }

    if (numero == 2) {
        return 1; 
        
    }
    
    
    if (numero % 2 == 0) {
        return 0; 


    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return 0; 
        }
    }

}
    return 1;
}

int main() {
    int num;

    printf("--- Testar se e Primo ---\n");
    printf("Digite um numero inteiro positivo para verificar: ");
    
    if (scanf("%d", &num) != 1) {
        printf("Erro na leitura. Por favor, insira um numero inteiro.\n");
        return 1;
    }

    if (Primo(num)) {
        printf("\nResultado: O numero %d e primo.\n", num);
    } else {
        printf("\nResultado: O numero %d nao e primo.\n", num);
    }

    printf("--------------------------------\n");

    return 0;
}