#include <stdio.h>
#include <stdlib.h>
#include "ListaDin.h" //inclui os prototipos

//Definição do tipo lista
struct elementoDin{
  struct pessoa dados;
  struct elementoDin *prox;
};

typedef struct elementoDin ElemDin;

ListaDin* cria_lista_din() {
  ListaDin *li = (ListaDin *) malloc(sizeof(ListaDin));
  if(li != NULL)
    *li = NULL;
  return li;
}

void libera_lista_din(ListaDin *li) {
  if(li != NULL){
    ElemDin *no;
    while((*li) != NULL){
      no = *li;
      *li = (*li)->prox;
      free(no);
    }
    free(li);
  }
}

int tamanho_lista_din(ListaDin *li){
  if(li == NULL)
    return 0;
  int cont = 0;
  ElemDin *no = *li;
  while(no != NULL){
    cont++;
    no = no->prox;
  }
  return cont;
}

int insere_lista_din_ordenada(ListaDin *li, struct dados pessoa) {
  if(li == NULL)
    return 0;
  ElemDin *no;
  no = (ElemDin *) malloc(sizeof(ElemDin));
  if(no == NULL)
    return 0;
  no->dados = pessoa;
  if((*li) == NULL){ //lista vazia:insere inicio
    no->prox = NULL;
    *li = no;
    return 1;
  }else{
    ElemDin *ant, *atual = *li;
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

int busca_lista_din_pos(ListaDin *li, int pos, struct dados *pessoa){
  if(li == NULL || pos <= 0)
    return 0;
  ElemDin *no = *li;
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