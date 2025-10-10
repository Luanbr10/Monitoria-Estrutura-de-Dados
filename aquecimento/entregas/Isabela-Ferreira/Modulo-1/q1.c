#include <stdio.h>

int main(){ 

    int anos, meses, dias; 
    int idade_dias;
            
    printf("Digite a idade em anos, meses e dias: ");
    scanf("%d %d %d",&anos, &meses, &dias);

   idade_dias = anos * 365 + meses * 30 + dias;

   printf("A idade dada em dias eh %d\n", idade_dias);

   return 0;

}