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

void main(){
    char nome[100], sexo_c, sexo[20];
    float salario;


    printf("qual seu nome?\n");
    scanf("%[^\n]",&nome);
    limpar_buffer();
    printf("qual seu sexo?(M/F)\n");
    scanf("%c",&sexo_c);
    printf("qual seu salario?\n");
    scanf("%f",&salario);

    if(sexo_c == 'm'||sexo_c == 'M')
    strcpy(sexo,"Masculino");

    if(sexo_c == 'f'||sexo_c == 'F')
    strcpy(sexo,"Feminino");

    system(LIMPAR_TELA);

    printf("-----------------------------------------------\n");
    printf("nome: %s\n",nome);
    printf("sexo: %s\n",sexo);
    printf("salario: %.2f\n",salario);
    printf("-----------------------------------------------\n");

}