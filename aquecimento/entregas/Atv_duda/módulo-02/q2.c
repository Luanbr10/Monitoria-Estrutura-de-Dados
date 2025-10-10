#include <stdio.h>


#define Tamanho_vetor 5

/**
 * @brief Encontra e imprime a maior nota em um vetor.
 * * @param notas O vetor (array) de notas.
 * @param tamanho O número de elementos no vetor.
 */
void imprimirMaiorNota(double notas[], int tamanho) {
    double maior = notas[0]; 

    for (int i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    printf("Maior Nota: %.2lf\n", maior);
}

/**
 * @brief
 * * @param notas 
 * @param tamanho 
 */
void imprimirMenorNota(double notas[], int tamanho) {
    double menor = notas[0]; 
    for (int i = 1; i < tamanho; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    printf("Menor Nota: %.2lf\n", menor);
}

/**
 * @brief 
 * * @param notas 
 * @param tamanho 
 */
void imprimirMedia(double notas[], int tamanho) {
    double soma = 0.0;
    
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    double media = soma / tamanho;
    
    printf("Media da Turma: %.2lf\n", media);
}

int main() {
    
    double notas[Tamanho_vetor];

    printf("--- Analise de Notas da Turma ---\n");
    
    for (int i = 0; i < Tamanho_vetor; i++) {
        printf("Digite a nota %d/%d: ", i + 1, Tamanho_vetor);
    
        if (scanf("%lf", &notas[i]) != 1) {
            printf("Erro na leitura. Por favor, insira um número válido.\n");
            return 1;
        }
    }


    printf("\n--- Resultados da Analise ---\n");
    imprimirMaiorNota(notas, Tamanho_vetor);
    imprimirMenorNota(notas, Tamanho_vetor);
    imprimirMedia(notas, Tamanho_vetor);
    printf("-----------------------------\n");

    return 0;
}