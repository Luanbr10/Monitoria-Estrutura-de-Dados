#include <stdio.h>
#include <stdlib.h>

void limpar_buffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}