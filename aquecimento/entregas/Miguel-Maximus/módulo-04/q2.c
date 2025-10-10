//Questão 2:** Usando a `struct` do exercício anterior, crie uma função `void imprimeAluno(struct Aluno *a)`
//que recebe um ponteiro para um aluno e imprime seus dados na tela usando o operador `->`.

#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

void imprimeAluno(struct Aluno *a) {
    printf("\n--- Dados do Aluno(Passando no ponteiro) ---\n");
    printf("Nome: %s\n", a->nome);
    printf("Matricula: %d\n", a->matricula);
    printf("Nota: %.2f\n", a->nota);
}

int main() {
    struct Aluno alunobabento;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", alunobabento.nome);

    printf("Digite a matricula do aluno: ");
    scanf("%d", &alunobabento.matricula);

    printf("Digite a nota do aluno: ");
    scanf("%f", &alunobabento.nota);

    imprimeAluno(&alunobabento);

    return 0;
}

//mmaximus-bit :)