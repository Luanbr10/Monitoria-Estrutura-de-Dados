#include <stdio.h>
#include <string.h>
#define LIMPAR_TELA "clear"


struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

/**
 * @brief 
 * @param a 
 */
void imprimeAluno(struct Aluno *a) {
    printf("--- Dados do Aluno (via Ponteiro) ---\n");
    printf("Nome:      %s\n", a->nome);
    printf("Matricula: %d\n", a->matricula);
    printf("Nota:      %.1f\n", a->nota);
}

int main() {
  
    struct Aluno alunoPrincipal;

    strcpy(alunoPrincipal.nome, "Maria de Sousa");
    alunoPrincipal.matricula = 20230002;
    alunoPrincipal.nota = 9.2;


    imprimeAluno(&alunoPrincipal);
    
    return 0;
}