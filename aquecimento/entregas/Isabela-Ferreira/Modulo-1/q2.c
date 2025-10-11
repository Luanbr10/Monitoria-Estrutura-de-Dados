#include <stdio.h>
#include <string.h>


int main(){

char nome[100];
char sexo[20];
float salario;

printf("Digite o nome completo: ");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = '\0';

printf("Digite o sexo: ");
scanf("%s", sexo);

printf("Digite o salario: ");
scanf("%f", &salario);

printf("Nome:%s\n", nome);
printf("Sexo:%s\n ", sexo);
printf("Salario:%.2f\n", salario);

return 0;

}



