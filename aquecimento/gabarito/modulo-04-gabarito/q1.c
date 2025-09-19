#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno aluno1;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", aluno1.nome);

    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno1.matricula);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno1.nota);

    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}