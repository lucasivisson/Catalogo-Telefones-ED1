#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncad.h" //inclui os prototipos
#include "TabelaHash.h"

//Definição do tipo lista
struct elemento{
  struct discagem ddd;
  ArvAVL *arv;
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

int lista_cheia(Lista *li){
  return 0;
}

int lista_vazia(Lista *li){
  if(li == NULL)
    return 1;
  if(*li == NULL)
    return 1;
  return 0;
}

int insere_lista_inicio(Lista *li, ArvAVL *arv, struct discagem ddd){
  if(li == NULL)
    return 0;
  Elem *no;
  no = (Elem *) malloc(sizeof(Elem));
  if(no == NULL)
    return 0;
  no->arv = arv;
  no->ddd = ddd;
  no->prox = (*li);
  *li = no;
  return 1;
}

int insere_lista_final(Lista *li, ArvAVL *arv, struct discagem ddd){
  if(li == NULL)
    return 0;
  Elem *no;
  no = (Elem *) malloc(sizeof(Elem));
  if(no == NULL)
    return 0;
  no->arv = arv;
  no->ddd = ddd;
  no->prox = NULL;
  if((*li) == NULL){
    *li = no;
  }else{
    Elem *aux;
    aux = *li;
    while(aux->prox != NULL){
      aux = aux->prox;
    }
    aux->prox = no;
  }
  return 1;
}

int insere_lista_ordenada(Lista *li, ArvAVL *arv, struct discagem ddd) {
  if(li == NULL)
    return 0;
  Elem *no;
  no = (Elem *) malloc(sizeof(Elem));
  if(no == NULL)
    return 0;
  no->arv = arv;
  no->ddd = ddd;
  if((*li) == NULL){ //lista vazia:insere inicio
    no->prox = NULL;
    *li = no;
    return 1;
  }else{
    Elem *ant, *atual = *li;
    while(atual != NULL && atual->ddd.prefixo < ddd.prefixo){
      ant = atual;
      atual = atual->prox;
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

int remove_lista_inicio(Lista *li){
  if(li == NULL)
    return 0;
  if((*li) == NULL) //lista vazia
    return 0;
  Elem *no = *li;
  *li = no->prox;
  free(no);
  return 1;
}

int remove_lista_final(Lista *li){
  if(li == NULL)
    return 0;
  if((*li) == NULL) //lista vazia
    return 0;
  
  Elem *ant, *no = *li;
  while(no->prox != NULL){
    ant = no;
    no = no->prox;
  }

  if(no == (*li)) //remover o primeiro?
    *li = no->prox;
  else
    ant->prox = no->prox;
  free(no);
  return 1;
}

int remove_lista(Lista *li, int prefixo){
  if(li == NULL)
    return 0;
  if((*li) == NULL) //lista vazia
    return 0;
  Elem *ant, *no = *li;
  while(no != NULL && no->ddd.prefixo != prefixo){
    ant = no;
    no = no->prox;
  }
  if(no == NULL) //não encontrado
    return 0;
  if(no == *li) //remover o primeiro?
    *li = no->prox;
  else
    ant->prox = no->prox;
  free(no);
  return 1;
}

int busca_lista_pos(Lista *li, int pos, ArvAVL *arv){
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
    *arv = (*no->arv);
    return 1;
  }
}

int busca_lista_ddd(Lista *li, int prefixo, ArvAVL *arv) {
  if(li == NULL) return 0;
  Elem *no = *li;
  while(no != NULL && no->ddd.prefixo != prefixo) {
    no = no->prox;
  }
  if(no == NULL)
    return 0;
  else{
    *arv = (*no->arv);
    return 1;
  }
}

int imprimirLista(Lista *li) {
  int existePessoa = 0;
  Elem *no = *li;
  while(no != NULL) {
    if(altura_ArvAVL(no->arv) != 0 && existePessoa == 0)
      existePessoa++;
    emOrdem_ArvAVL(no->arv);
    no = no->prox;
  }
  return existePessoa;
}
