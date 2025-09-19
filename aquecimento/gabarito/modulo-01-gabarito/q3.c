#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("\nA media do aluno foi: %.2f\n", media);

    if (media >= 7.0) {
        printf("Status: Aprovado\n");
    } else if (media >= 5.0) {
        printf("Status: Recuperacao\n");
    } else {
        printf("Status: Reprovado\n");
    }

    return 0;
}