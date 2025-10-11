#include <stdio.h>
#include <string.h>

// Definição da estrutura Aluno
struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

// Função que recebe um ponteiro para uma struct Aluno e imprime seus dados.
// O parâmetro 'a' é um ponteiro, então usamos '->' para acessar os membros.
void imprimeAluno(struct Aluno *a) {
    printf("--- Dados do Aluno (via função) ---\n");
    printf("Nome: %s\n", a->nome);
    printf("Matrícula: %d\n", a->matricula);
    printf("Nota: %.2f\n", a->nota);
}

int main() {
    // Declara e inicializa uma variável do tipo struct Aluno
    struct Aluno aluno1;
    strcpy(aluno1.nome, "Maria Souza");
    aluno1.matricula = 202510456;
    aluno1.nota = 9.2;

    // Chama a função, passando o ENDEREÇO de 'aluno1' usando o operador '&'.
    // A função 'imprimeAluno' receberá um ponteiro para 'aluno1'.
    imprimeAluno(&aluno1);

    return 0;
}