#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

void imprimeAluno(struct Aluno *a) {
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", a->nome);
    printf("Matrícula: %d\n", a->matricula);
    printf("Nota: %.2f\n", a->nota);
}

int main() {
    struct Aluno aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Digite a matrícula: ");
    scanf("%d", &aluno.matricula);

    printf("Digite a nota: ");
    scanf("%f", &aluno.nota);

    imprimeAluno(&aluno);

    return 0;
}
