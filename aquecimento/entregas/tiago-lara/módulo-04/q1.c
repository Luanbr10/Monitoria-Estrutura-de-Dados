
#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno a;

    printf("Digite o nome do aluno: ");
    fgets(a.nome, sizeof(a.nome), stdin);
    a.nome[strcspn(a.nome, "\n")] = '\0';

    printf("Digite a matrícula: ");
    scanf("%d", &a.matricula);

    printf("Digite a nota: ");
    scanf("%f", &a.nota);

    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", a.nome);
    printf("Matrícula: %d\n", a.matricula);
    printf("Nota: %.2f\n", a.nota);

    return 0;
}
