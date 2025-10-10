#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #define LIMPAR_TELA "cls"
#else
    #define LIMPAR_TELA "clear"
#endif

void limpar_buffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

typedef struct{
    char nome[50];
    int matricula;
    float nota;
}Aluno;

void imprimeAluno(Aluno *a){

    system(LIMPAR_TELA);

    printf("----------------ALUNO------------------\n");
    printf("matricula: %d\n",a->matricula);
    printf("nome: %s\n", a->nome);
    printf("nota: %.2f\n", a->nota);
    printf("---------------------------------------");

}

void main(){
    Aluno aluno;

    printf("digite a matricula do aluno: \n");
    scanf("%d",&aluno.matricula);
    printf("digite o nome do aluno: \n");
    limpar_buffer();
    scanf("%[^\n]",&aluno.nome);
    printf("digite a nota do aluno: \n");
    scanf("%f", &aluno.nota);

    imprimeAluno(&aluno);

}
