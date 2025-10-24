#include "utils.h"

// Função para criar e inicializar uma lista vazia
Lista* criar_lista() {
    Lista* li = (Lista*) malloc(sizeof(Lista)); // Aloca memória para o ponteiro da lista
    if (li != NULL) {
        *li = NULL; // Conteúdo do ponteiro da lista aponta para NULL
    }
    return li;
}

// Inserir elemento no início da lista
void inserir_inicio(Lista* li, int valor) {
    if (li == NULL) return; // Verifica se a lista existe

    //Aloca memória para o novo nó
    No* novo_no = (No*) malloc(sizeof(No));
    if (novo_no == NULL) return; // Falha na alocação

    // Armazena os dados no novo nó
    novo_no->valor = valor;

    //O novo nó aponta para o antigo início da lista
    novo_no->prox = (*li);

    // O início da lista agora é o novo nó
    *li = novo_no;
}

void inserir_final(Lista* li, int valor) {
    if (li == NULL) return;

    //Aloca memória para o novo nó
    No* novo_no = (No*) malloc(sizeof(No));
    if (novo_no == NULL) return;

    //Armazena os dados
    novo_no->valor = valor;
    novo_no->prox = NULL; // Como ele será o último, já aponta para NULL

    //Se a lista estiver vazia, ele é o primeiro e único nó
    if (*li == NULL) {
        *li = novo_no;
    } else {
        // Percorre a lista até achar o último
        No* aux = *li;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        //O antigo último nó agora aponta para o novo nó
        aux->prox = novo_no;
    }
}

void remover_inicio(Lista *li){
    if (li == NULL || *li == NULL) return;

    No* no_remover = *li;

    *li = no_remover->prox;

    free(no_remover);
}
// Remover elemento no inicio da lista
void remover_final(Lista* li) {
    if (li == NULL || *li == NULL) return;

    No *anterior = NULL;
    No *no_a_remover = *li;

    // 1. Percorre a lista até o final, guardando o anterior
    while (no_a_remover->prox != NULL) {
        anterior = no_a_remover;
        no_a_remover = no_a_remover->prox;
    }

    // 2. Se 'anterior' é NULL, significa que a lista só tem um elemento
    if (anterior == NULL) {
        *li = NULL; // A lista fica vazia
    } else {
        // 3. O penúltimo nó agora se torna o último
        anterior->prox = NULL;
    }

    // 4. Libera a memória do nó que estava no final
    free(no_a_remover);
}

No* consultar_lista(Lista* li, int valor_busca) {
    if (li == NULL || *li == NULL) return NULL;

    No* atual = *li;
    while (atual != NULL) {
        if (atual->valor == valor_busca) {
            return atual; // Encontrou! Retorna o ponteiro para o nó.
        }
        atual = atual->prox;
    }

    return NULL; // Não encontrou o elemento
}

void imprimir_lista(Lista *li){
    if (li == NULL || *li == NULL){
        printf("Lista Vazia\n");
        return;
    }

    No *atual = *li;
    printf("Lista: \n");

    while (atual != NULL){
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}
