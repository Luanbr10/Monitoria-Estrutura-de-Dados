void troca(int *a, int *b) {

int temp = *a;
*a = *b;
*b = temp;

}

int main() {
    int x, y;
     
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("Antes: x = %d, y = %d\n", x, y);
    
    troca(&x, &y);

    printf("Depois: x = %d, y = %d\n", x, y);

    printf("\n=======================\n");
    
    return 0;

}