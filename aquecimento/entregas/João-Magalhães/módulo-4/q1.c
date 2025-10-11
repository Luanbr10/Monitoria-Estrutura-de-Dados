#include <stdio.h>
#include <string.h> // para strcpy

// Definição da struct Aluno
struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno a; // Declaração de uma variável do tipo Aluno

    // Preenchendo os dados
    strcpy(a.nome, "Joao Pedro"); // copiando string para o campo nome
    a.matricula = 12345;
    a.nota = 8.5;

    // Imprimindo os dados
    printf("Nome: %s\n", a.nome);
    printf("Matricula: %d\n", a.matricula);
    printf("Nota: %.2f\n", a.nota);

    return 0;
}
