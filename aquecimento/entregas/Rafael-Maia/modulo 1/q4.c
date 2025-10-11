#include <stdio.h>

/*
------------------------------------------------------------
Questão 4:
Leia 3 notas, calcule a média e imprima:
"Aprovado", "Recuperacao" ou "Reprovado".
(média >= 7, >= 5, < 5)

------------------------------------------------------------
*/

int main() {
    float n1, n2, n3, media;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Media: %.2f\n", media);

    if (media >= 7)
        printf("Aprovado!\n");
    else if (media >= 5)
        printf("Recuperacao.\n");
    else
        printf("Reprovado.\n");

    return 0;
}
