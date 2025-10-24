#ifndef INDEX_H
#define INDEX_H

#include <stdlib.h> 
#include <stdio.h>
typedef struct No {
    int dado;
    struct No* prox; // Ponteiro para o próximo
    struct No* ant;  // Ponteiro para o anterior
} No;

// O "Controlador" da lista.
// Guarda o início (cabeça) e o fim (cauda).

typedef struct Lista {
    No* head; // Ponteiro para o primeiro nó
    No* tail; // Ponteiro para o último nó
} Lista;


// Aloca memória para a struct Lista e inicializa head/tail como NULL.
Lista* criar_lista();

// Imprime todos os elementos do início ao fim.
void imprimir_lista(Lista* lista);

// Insere um novo elemento no início da lista.
void inserir_inicio(Lista* lista, int dado);

// Insere um novo elemento no final da lista.
void inserir_final(Lista* lista, int dado);

// Remove o elemento do início da lista.
void remover_inicio(Lista* lista);

// Remove o elemento do final da lista.
void remover_final(Lista* lista);

// Busca um elemento na lista e retorna o nó (ou NULL se não achar).
No* buscar(Lista* lista, int valor);


#endif // INDEX_H