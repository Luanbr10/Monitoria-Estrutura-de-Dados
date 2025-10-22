#include "utils.h"
int main() {
    // 1. Criar a lista
    Lista* minha_lista = criar_lista();
    printf("Lista criada.\n");
    imprimir_lista(minha_lista);
    printf("\n");

    // 2. Inserir elementos
    printf("Inserindo 10 no inicio...\n");
    inserir_inicio(minha_lista, 10);
    imprimir_lista(minha_lista);

    printf("Inserindo 20 no final...\n");
    inserir_final(minha_lista, 20);
    imprimir_lista(minha_lista);

    printf("Inserindo 5 no inicio...\n");
    inserir_inicio(minha_lista, 5);
    imprimir_lista(minha_lista);

    printf("Inserindo 30 no final...\n");
    inserir_final(minha_lista, 30);
    imprimir_lista(minha_lista);
    printf("\n");

    // 3. Consultar um elemento
    printf("Consultando o elemento 20...\n");
    No* no_encontrado = consultar_lista(minha_lista, 20);
    if (no_encontrado != NULL) {
        printf("Elemento 20 encontrado na lista!\n");
    } else {
        printf("Elemento 20 nao encontrado.\n");
    }
    printf("\n");

    // 4. Remover elementos
    printf("Removendo do inicio...\n");
    remover_inicio(minha_lista);
    imprimir_lista(minha_lista);

    printf("Removendo do final...\n");
    remover_final(minha_lista);
    imprimir_lista(minha_lista);

    printf("Removendo do final novamente...\n");
    remover_final(minha_lista);
    imprimir_lista(minha_lista);

    // Liberar a memória da lista no final do programa
    // (Boa prática é criar uma função para liberar todos os nós)
    free(minha_lista);

    return 0;
}