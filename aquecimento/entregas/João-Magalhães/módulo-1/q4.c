#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    // Lê as 3 notas
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    // Calcula a média
    media = (n1 + n2 + n3) / 3;

    // Exibe a média
    printf("\nMedia: %.2f\n", media);

    // Verifica a situação
    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 5) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}