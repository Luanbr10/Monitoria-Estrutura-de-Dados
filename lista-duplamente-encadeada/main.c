// main.c

#include "index.h" // Inclui nossa biblioteca

// Para compilar no Linux/macOS:
// gcc main.c index.c -o meu_programa
// Para executar:
// ./meu_programa

int main() {
    printf("--- Criando lista ---\n");
    Lista* minha_lista = criar_lista();
    imprimir_lista(minha_lista); // Deve imprimir "Lista vazia"
    printf("\n");

    printf("--- Inserindo no inicio: 10, 20 ---\n");
    inserir_inicio(minha_lista, 10);
    inserir_inicio(minha_lista, 20);
    imprimir_lista(minha_lista);   // Saída: 20 -> 10 -> NULL
    imprimir_inverso(minha_lista); // Saída: 10 -> 20 -> NULL
    printf("\n");

    printf("--- Inserindo no final: 5, 1 ---\n");
    inserir_final(minha_lista, 5);
    inserir_final(minha_lista, 1);
    imprimir_lista(minha_lista);   // Saída: 20 -> 10 -> 5 -> 1 -> NULL
    imprimir_inverso(minha_lista); // Saída: 1 -> 5 -> 10 -> 20 -> NULL
    printf("\n");

    printf("--- Buscando elementos ---\n");
    No* no_encontrado = buscar(minha_lista, 5);
    if (no_encontrado != NULL) {
        printf("Encontrou o valor: %d\n", no_encontrado->dado);
    } else {
        printf("Nao encontrou o valor 5.\n");
    }
    
    no_encontrado = buscar(minha_lista, 99);
    if (no_encontrado != NULL) {
        printf("Encontrou o valor: %d\n", no_encontrado->dado);
    } else {
        printf("Nao encontrou o valor 99.\n");
    }
    printf("\n");

    printf("--- Removendo elementos ---\n");
    remover_inicio(minha_lista);   // Remove o 20
    imprimir_lista(minha_lista); // Saída: 10 -> 5 -> 1 -> NULL
    
    remover_final(minha_lista);    // Remove o 1
    imprimir_lista(minha_lista); // Saída: 10 -> 5 -> NULL
    printf("\n");

    printf("--- Removendo ate esvaziar ---\n");
    remover_inicio(minha_lista);   // Remove 10
    remover_final(minha_lista);    // Remove 5
    
    imprimir_lista(minha_lista);   // Saída: Lista vazia.
    imprimir_inverso(minha_lista); // Saída: Lista vazia.

    // Tenta remover de lista vazia
    remover_inicio(minha_lista);
    
    // (Opcional: Criar uma função 'liberar_lista' para liberar 
    // todos os nós restantes e a própria struct lista)
    free(minha_lista);

    return 0;
}