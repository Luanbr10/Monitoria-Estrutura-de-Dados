#include <stdio.h>

int main() {
    int anos, meses, dias;
    int total_dias;

    printf("Digite sua idade em anos: "); 
    scanf("%d", &anos);

    printf("Digite sua idade em meses: "); 
    scanf("%d", &meses);

    printf("Digite sua idade em dias: "); 
    scanf("%d", &dias);

    total_dias = (anos * 365) + (meses * 30) + dias;

    printf("Sua idade em dias é: %d\n", total_dias);

    return 0;
}
