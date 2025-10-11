#include <stdio.h>
#include <string.h>

// Definição da struct Aluno
struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

// Função que imprime os dados de um aluno usando ponteiro
void imprimeAluno(struct Aluno *a) {
    printf("Nome: %s\n", a->nome);
    printf("Matricula: %d\n", a->matricula);
    printf("Nota: %.2f\n", a->nota);
}

int main() {
    struct Aluno aluno1;

    // Preenchendo os dados
    strcpy(aluno1.nome, "Maria Clara");
    aluno1.matricula = 54321;
    aluno1.nota = 9.2;

    // Chamando a função para imprimir
    imprimeAluno(&aluno1);

    return 0;
}
