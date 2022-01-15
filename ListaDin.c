#include <stdio.h>
#include <stdlib.h>
#include "ListaDin.h" //inclui os prototipos

//Definição do tipo lista
struct elemento{
  struct pessoa dados;
  struct elemento *prox;
};

typedef struct elemento Elem;

Lista* cria_lista() {
  Lista *li = (Lista *) malloc(sizeof(Lista));
  if(li != NULL)
    *li = NULL;
  return li;
}

void libera_lista(Lista *li) {
  if(li != NULL){
    Elem *no;
    while((*li) != NULL){
      no = *li;
      *li = (*li)->prox;
      free(no);
    }
    free(li);
  }
}

int tamanho_lista(Lista *li){
  if(li == NULL)
    return 0;
  int cont = 0;
  Elem *no = *li;
  while(no != NULL){
    cont++;
    no = no->prox;
  }
  return cont;
}

int insere_lista_ordenada(Lista *li, struct dados pessoa) {
  if(li == NULL)
    return 0;
  Elem *no;
  no = (Elem *) malloc(sizeof(Elem));
  if(no == NULL)
    return 0;
  no->dados = pessoa;
  if((*li) == NULL){ //lista vazia:insere inicio
    no->prox = NULL;
    *li = no;
    return 1;
  }else{
    Elem *ant, *atual = *li;
    char *strAtual = (char*) malloc(sizeof(char));
    char *strParametro = (char*) malloc(sizeof(char));
    strParametro = pessoa.nome;
    if(atual != NULL) {
      strAtual = atual->dados.nome;
      while(atual != NULL && strcasecmp(strAtual, strParametro) < 0){
        ant = atual;
        atual = atual->prox;
        strAtual = atual->dados.nome;
      }
      if(atual == *li){ //insere inicio
        no->prox = (*li);
        *li = no;
      }else{
        no->prox = atual;
        ant->prox = no;
      }
      return 1;
    }
  }                   
}

int busca_lista_pos(Lista *li, int pos, struct dados *pessoa){
  if(li == NULL || pos <= 0)
    return 0;
  Elem *no = *li;
  int i = 1;
  while(no != NULL && i < pos){
    no = no->prox;
    i++;
  }
  if(no == NULL)
    return 0;
  else{
    *pessoa = no->dados;
    return 1;
  }
}