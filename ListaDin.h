#ifndef LISTA_DIN_H
#define LISTA_DIN_H

typedef struct elementoDin* ListaDin;

ListaDin* cria_lista_din();
void libera_lista_din(ListaDin *li);
int insere_lista_din_ordenada(ListaDin *li, struct dados pessoa);
int tamanho_lista_din(ListaDin *li);
int busca_lista_din_pos(ListaDin *li, int pos, struct dados *pessoa);

#endif