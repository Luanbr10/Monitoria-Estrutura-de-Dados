#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite a primeira nota: "); 
    scanf("%f", &n1);

    printf("Digite a segunda nota: "); 
    scanf("%f", &n2);

    printf("Digite a terceira nota: "); 
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\nMédia: %.2f\n", media);

    if (media >= 7) {
        printf("Aprovado\n"); 
    } else if (media >= 5) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n"); 
    }

    return 0;
}
