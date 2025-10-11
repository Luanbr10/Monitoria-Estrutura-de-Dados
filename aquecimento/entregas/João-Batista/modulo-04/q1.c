#include <stdio.h>
#include <string.h> // Necessário para strcpy

// Definição da estrutura (struct) Aluno
struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    // Declara uma variável 'aluno1' do tipo 'struct Aluno'
    struct Aluno aluno1;

    // Preenche os dados da struct
    // Para strings, usamos strcpy ou lemos diretamente do teclado.
    // Vamos preencher diretamente no código para simplificar.
    strcpy(aluno1.nome, "Joao da Silva");
    aluno1.matricula = 202510123;
    aluno1.nota = 8.5;

    // Imprime os dados acessando os campos com o operador '.'
    printf("--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Matrícula: %d\n", aluno1.matricula);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}