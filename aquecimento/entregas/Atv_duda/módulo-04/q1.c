#include <stdio.h>
#include <string.h> 
#define LIMPAR_TELA "clear"

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
  
    struct Aluno aluno1;
    strcpy(aluno1.nome, "Maria Andrade");
    
 
    aluno1.matricula = 20230001;
    aluno1.nota = 8.5;

    printf("--- Dados do Aluno ---\n");
    printf("Nome:      %s\n", aluno1.nome);
    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nota:      %.1f\n", aluno1.nota);

    return 0;
}