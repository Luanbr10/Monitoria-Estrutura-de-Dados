#include <stdio.h>
#include <string.h>

/*
------------------------------------------------------------
Questão 2:
Usando a struct do exercício anterior, crie uma função
void imprimeAluno(struct Aluno *a) que recebe um ponteiro
para um aluno e imprime seus dados usando o operador ->.

------------------------------------------------------------
*/

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

void imprimeAluno(struct Aluno *a) {
    printf("\n=== Dados do Aluno ===\n");
    printf("Nome: %s\n", a->nome);
    printf("Matricula: %d\n", a->matricula);
    printf("Nota: %.2f\n", a->nota);
}

int main() {
    struct Aluno aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Digite a matricula: ");
    scanf("%d", &aluno.matricula);

    printf("Digite a nota: ");
    scanf("%f", &aluno.nota);

    imprimeAluno(&aluno);

    return 0;
}
