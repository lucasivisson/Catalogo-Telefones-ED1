#ifndef LISTA_DIN_ENCAD_H
#define LISTA_DIN_ENCAD_H

struct discagem{
  int prefixo;
  char estado[100];
  char regiao[100];
};

typedef struct elemento* Lista;

typedef struct NO *ArvAVL;

Lista* cria_lista();
void libera_lista(Lista *li);
int insere_lista_final(Lista *li, ArvAVL *arv, struct discagem ddd);
int insere_lista_inicio(Lista *li, ArvAVL *arv, struct discagem ddd);
int insere_lista_ordenada(Lista *li, ArvAVL *arv, struct discagem ddd);
int remove_lista(Lista *li, int prefixo);
int remove_lista_inicio(Lista *li);
int remove_lista_final(Lista *li);
int tamanho_lista(Lista *li);
int lista_vazia(Lista *li);
int lista_cheia(Lista *li);
int busca_lista_ddd(Lista *li, int prefixo, ArvAVL *arv);
int busca_lista_pos(Lista *li, int pos, ArvAVL *arv);
int imprimirListaNumero(Lista *li);

#endif