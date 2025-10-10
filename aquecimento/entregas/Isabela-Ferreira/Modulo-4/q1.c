#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main() {
    Aluno aluno;

    printf("\n=======DADOS DO ALUNO========\n");

    printf("Digite o nome completo: \n");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Digite a matricula: \n");
    scanf("%d", &aluno.matricula);

    printf("Digite a nota: \n");
    scanf("%f", &aluno.nota);
    
    printf("=============================\n");

    return 0;

}

