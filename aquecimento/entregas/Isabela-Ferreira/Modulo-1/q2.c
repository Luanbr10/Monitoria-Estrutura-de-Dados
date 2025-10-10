#include <stdio.h>
#include <string.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){

char nome[100];
char sexo[20];
float salario;

printf("Digite o nome completo: ");
fgets(nome, sizeof(nome), stdin);
nome[strcpsn(nome, "\n")] = '0';

printf("Digite o sexo: ");
scanf(" %s", sexo);
limpar_buffer();

printf("Digite o salario: ");
scanf("%f", &salario);
limpar_buffer();

printf("Nome:%s\n", nome);
printf("Sexo:%s\n ", sexo);
printf("Salario:%.2f\n", salario);

return 0;

}



