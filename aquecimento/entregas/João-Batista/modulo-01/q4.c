#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite as três notas:\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("\nA média do aluno é: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situação: Aprovado\n");
    } else if (media >= 5.0) {
        printf("Situação: Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}