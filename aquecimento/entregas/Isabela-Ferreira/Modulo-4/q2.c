#include <stdio.h>
#include <string.h>

#ifdef _WIN32
    #define LIMPAR_TELA "cls"
#else
    #define LIMPAR_TELA "clear"
#endif

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Aluno;

void imprimeAluno(Aluno *a){

    printf("Digite Nome Completo: \n");
    fgets(a->nome, sizeof(a->nome), stdin);
    a->nome[strcspn(a->nome, "\n")] = '\0';

    printf("Digite a Matricula: \n" );
    scanf("%d", &a->matricula);

    printf("Digite a Nota: \n");
    scanf("%f", &a->nota);

    system(LIMPAR_TELA);

    printf("\n=======DADOS DO ALUNO========\n");

    printf("Nome Completo: %s\n", a->nome);
    
    printf("Matricula: %d\n", a->matricula);
   
    printf("Nota: %.2f\n", a->nota);

    printf("=============================\n\n");



}
    
int main() {

    Aluno aluno;

    imprimeAluno(&aluno);

    return 0;

}

