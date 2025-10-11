int ehPrimo(int a){
    if(a <= 1){
        return 0;
    }
    int i;
    for(i =2; i <= a/2; i++){    // dividi por 2, apenas para otimizar o codigo, é desnecessario fazer divisoes ate ele mesmo
        if( a % i == 0)
        return 0;
    }

    return 1;

}

int main() {

    int a, i;

    printf("Digite numero inteiro: ");
    scanf("%d", &a);

    if(ehPrimo(a)){
      printf("%d eh primo", a);
    }else{  
        printf("%d nao eh primo", a);
 }
   
return 0; 

}