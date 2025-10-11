#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

void imprimeAluno(struct Aluno *a) {
    printf("\n--- Dados do Aluno (via ponteiro) ---\n");
    printf("Nome: %s\n", a->nome);
    printf("Matricula: %d\n", a->matricula);
    printf("Nota: %.2f\n", a->nota);
}

int main() {
    struct Aluno meuAluno;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", meuAluno.nome);

    printf("Digite a matricula do aluno: ");
    scanf("%d", &meuAluno.matricula);

    printf("Digite a nota do aluno: ");
    scanf("%f", &meuAluno.nota);

    imprimeAluno(&meuAluno);

    return 0;
}