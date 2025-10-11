#include <stdio.h>

int main(){

    int n, i;

    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &n);

    printf("\n-----TABUADA-------\n");

    for(i = 1; i <= 9; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
 
}