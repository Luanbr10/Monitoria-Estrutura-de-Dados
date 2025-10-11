#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main(){

    Aluno aluno1;

    strcpy(aluno1.nome,"Miguel");
    aluno1.matricula = 25101337;
    aluno1.nota = 10;

    printf("Olá %s, matrícula %d. Você é nota %.2f\n",aluno1.nome,aluno1.matricula,aluno1.nota);

}