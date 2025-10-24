// Arquivo: utils.h

#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} No;

typedef No* Lista;

// Protótipos de todas as funções
Lista* criar_lista();
void inserir_inicio(Lista *li, int valor);
void inserir_final(Lista *li, int valor);
void remover_inicio(Lista *li);
void remover_final(Lista *li);
No* consultar_lista(Lista *li, int valor_busca);
void imprimir_lista(Lista *li);


#endif