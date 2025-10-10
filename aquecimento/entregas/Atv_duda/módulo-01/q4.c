#include <stdio.h>

int main() {

    double nota1, nota2, nota3, media;

    printf("--- Verificador de Situacao do Aluno ---\n");
    
    printf("Digite a primeira nota: ");
    if (scanf("%lf", &nota1) != 1) return 1;

    printf("Digite a segunda nota: ");
    if (scanf("%lf", &nota2) != 1) return 1;
    
    printf("Digite a terceira nota: ");
    if (scanf("%lf", &nota3) != 1) return 1;
    
    media = (nota1 + nota2 + nota3) / 3.0;

    printf("\n----------------------------------------\n");
    printf("Notas: (%.2lf, %.2lf, %.2lf)\n", nota1, nota2, nota3);
    printf("Media Final: %.2lf\n", media);
    printf("Situacao: ");
    
    if (media >= 7.0) {
        printf("Aprovado\n");
    } else if (media >= 5.0) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
    
    printf("----------------------------------------\n");

    return 0;
}