#include "index.h"

// --- Função 1: criar_lista ---
// Apenas aloca memória para o controlador e aponta head/tail para NULL.
Lista* criar_lista() {
    Lista* nova_lista = (Lista*) malloc(sizeof(Lista));
    if (nova_lista != NULL) {
        nova_lista->head = NULL;
        nova_lista->tail = NULL;
    }
    return nova_lista;
}

void inserir_inicio(Lista* lista, int dado) {
    // 1. Aloca memória para o novo nó e define o dado.
    No* novo_no = (No*) malloc(sizeof(No));
    if (novo_no == NULL) return; // Falha na alocação
    novo_no->dado = dado;

    // 2. O 'proximo' do novo nó é o antigo 'head'.
    novo_no->prox = lista->head;
    // 3. O 'anterior' do novo nó é NULL (ele é o primeiro).
    novo_no->ant = NULL;

    // 4. VERIFICAÇÃO IMPORTANTE: A lista estava vazia?
    if (lista->head == NULL) {
        // Se sim, o novo nó é também o ÚLTIMO (tail).
        lista->tail = novo_no;
    } else {
        // Se não, o 'anterior' do antigo 'head' deve apontar para o novo nó.
        lista->head->ant = novo_no;
    }

    // 5. Finalmente, atualiza o 'head' da lista para ser o novo nó.
    lista->head = novo_no;
}


void inserir_final(Lista* lista, int dado) {
    // 1. Aloca memória para o novo nó e define o dado.
    No* novo_no = (No*) malloc(sizeof(No));
    if (novo_no == NULL) return;
    novo_no->dado = dado;

    // 2. O 'proximo' do novo nó é NULL (ele é o último).
    novo_no->prox = NULL;
    // 3. O 'anterior' do novo nó é o antigo 'tail'.
    novo_no->ant = lista->tail;

    // 4. VERIFICAÇÃO: A lista estava vazia?
    if (lista->tail == NULL) { // (Poderia ser 'lista->head == NULL' também)
        // Se sim, o novo nó é também o PRIMEIRO (head).
        lista->head = novo_no;
    } else {
        // Se não, o 'proximo' do antigo 'tail' deve apontar para o novo nó.
        lista->tail->prox = novo_no;
    }

    // 5. Finalmente, atualiza o 'tail' da lista para ser o novo nó.
    lista->tail = novo_no;
}

void remover_inicio(Lista* lista) {
    // 1. Verifica se a lista está vazia.
    if (lista->head == NULL) {
        printf("A lista esta vazia. Nada para remover.\n");
        return;
    }

    // 2. Guarda o nó que será removido (o 'head' atual) em um temporário.
    No* no_remover = lista->head;

    // 3. Atualiza o 'head' da lista para ser o *próximo* nó.
    lista->head = lista->head->prox; // ou no_remover->prox

    // 4. VERIFICAÇÃO: A lista ficou vazia?
    if (lista->head == NULL) {
        // Se sim, o 'tail' também deve ser NULL.
        lista->tail = NULL;
    } else {
        // Se não, o 'anterior' do NOVO 'head' deve ser NULL.
        lista->head->ant = NULL;
    }

    // 5. Libera a memória do nó que foi removido.
    printf("Removendo do inicio: %d\n", no_remover->dado);
    free(no_remover);
}

void remover_final(Lista* lista) {
    // 1. Verifica se a lista está vazia.
    if (lista->tail == NULL) {
        printf("A lista esta vazia. Nada para remover.\n");
        return;
    }

    // 2. Guarda o nó que será removido (o 'tail' atual).
    No* no_remover = lista->tail;

    // 3. Atualiza o 'tail' da lista para ser o *anterior* nó.
    lista->tail = lista->tail->ant; // ou no_remover->ant

    // 4. VERIFICAÇÃO: A lista ficou vazia?
    if (lista->tail == NULL) {
        // Se sim, o 'head' também deve ser NULL.
        lista->head = NULL;
    } else {
        // Se não, o 'proximo' do NOVO 'tail' deve ser NULL.
        lista->tail->prox = NULL;
    }

    // 5. Libera a memória.
    printf("Removendo do final: %d\n", no_remover->dado);
    free(no_remover);
}

// --- Função 6: buscar (Consulta) ---
// Igual à lista simples, só percorremos para frente.
No* buscar(Lista* lista, int valor) {
    No* atual = lista->head; // Começa no início

    while (atual != NULL) {
        if (atual->dado == valor) {
            return atual; // Encontrou! Retorna o ponteiro para o nó.
        }
        atual = atual->prox; // Move para o próximo
    }

    return NULL; // Não encontrou, retorna NULL.
}


// --- Função 7: imprimir_lista (do início ao fim) ---
void imprimir_lista(Lista* lista) {
    if (lista->head == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No* atual = lista->head; // Começa no 'head'
    printf("Lista (inicio->fim): ");
    while (atual != NULL) {
        printf("%d -> ", atual->dado);
        atual = atual->prox; // Vai para o PRÓXIMO
    }
    printf("NULL\n");
}

// --- Função 8: imprimir_inverso (do fim ao início) ---
// Aqui vemos o poder da lista duplamente encadeada!
void imprimir_inverso(Lista* lista) {
    if (lista->tail == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No* atual = lista->tail; // Começa no 'tail'
    printf("Lista (fim->inicio): ");
    while (atual != NULL) {
        printf("%d -> ", atual->dado);
        atual = atual->ant; // Vai para o ANTERIOR
    }
    printf("NULL\n");
}