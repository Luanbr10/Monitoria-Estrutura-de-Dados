#include <stdio.h>
#include <string.h>

/*
------------------------------------------------------------
Questão 1:
Defina uma struct Aluno com os campos:
- char nome[50]
- int matricula
- float nota

Declare uma variável do tipo Aluno, preencha os dados
e imprima-os.
------------------------------------------------------------
*/

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);

    // remove o \n final da string lida pelo fgets
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Digite a matricula: ");
    scanf("%d", &aluno.matricula);

    printf("Digite a nota: ");
    scanf("%f", &aluno.nota);

    printf("\n=== Dados do Aluno ===\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nota: %.2f\n", aluno.nota);

    return 0;
}
