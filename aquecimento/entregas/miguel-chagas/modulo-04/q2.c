#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int matricula;
    float nota;
} Aluno;

void imprimeAluno(Aluno *a){

    strcpy(a->nome,"Miguel");
    a->matricula = 25101337;
    a->nota = 10;

    printf("Olá %s, matrícula %d. Você é nota %.2f\n",a->nome,a->matricula,a->nota);
}

int main(){

    Aluno aluno1;
    imprimeAluno(&aluno1);
}