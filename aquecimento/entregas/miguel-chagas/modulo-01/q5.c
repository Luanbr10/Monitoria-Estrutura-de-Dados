#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%d",&num);

    printf("\n=----TABUADA----=\n");

    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n",num,i,num * i);
    }

    return 0;
}