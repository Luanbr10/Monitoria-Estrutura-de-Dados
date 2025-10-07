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
    
    //vou considerar os meses tendo 30 dias sempre e anos tendo 365

    printf("qual seu nome?\n");
    scanf("%[^\n]",&nome);
    printf("qual seu sexo?\n");
    scanf("%c",&sexo);
    printf("qual seu salario?\n");
    scanf("%f",&salario);

    if(sexo_c == 'm'||sexo_c == 'M')
    strcpy(sexo,"Masculino");

    if(sexo_c == 'f'||sexo_c == 'F')
    strcpy(sexo,"Feminino");

    system(LIMPAR_TELA);

    printf("-----------------------------------------------\n");
    printf("sua idade somente em dias é igual a %d\n",nome);
    printf("sexo: %s\n",sexo);
    printf("salario: %.2f\n",salario);
    printf("-----------------------------------------------\n");

}