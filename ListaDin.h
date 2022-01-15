#ifndef LISTA_DIN_H
#define LISTA_DIN_H

struct dados {
    int numero;
    char nome[100];
    char endereco[100];
};

typedef struct elemento* Lista;

Lista* cria_lista();
void libera_lista(Lista *li);
int insere_lista_ordenada(Lista *li, struct dados pessoa);
int tamanho_lista(Lista *li);
int busca_lista_pos(Lista *li, int pos, struct dados *pessoa);