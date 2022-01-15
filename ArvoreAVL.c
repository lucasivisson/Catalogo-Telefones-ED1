#include <stdio.h>
#include <stdlib.h>
#include "ArvoreAVL.h"
#include "ListaDinEncad.h"
#include "TabelaHash.h"
#include <string.h>

struct NO {
    struct dados pessoa;
    int alt; //altura daquela sub-arvore
    struct NO *esq;
    struct NO *dir;
};

ArvAVL* cria_ArvAVL() {
    ArvAVL *raiz = (ArvAVL*) malloc(sizeof(ArvAVL));
    if(raiz != NULL)
        *raiz = NULL;
    return raiz;
}

void libera_NO(struct NO *no) {
    if(no == NULL)
        return;
    libera_NO(no->esq);
    libera_NO(no->dir);
    free(no);
    no = NULL;
}

void libera_ArvAVL(ArvAVL *raiz) {
    if(raiz == NULL)
        return;
    libera_NO(*raiz);
    free(raiz);
}

int estaVazia_ArvAVL(ArvAVL *raiz) {
    if(raiz == NULL)
        return 1;
    if(*raiz == NULL)
        return 1;
    return 0;
}

int altura_ArvAVL(ArvAVL *raiz) {
    if(raiz == NULL)
        return 0;
    if(*raiz == NULL)
        return 0;
    int alt_esq = totalNO_ArvAVL(&((*raiz)->esq));
    int alt_dir = totalNO_ArvAVL(&((*raiz)->dir));
    if(alt_esq > alt_dir) 
        return (alt_esq + 1);
    else
        return (alt_dir + 1);
}

int totalNO_ArvAVL(ArvAVL *raiz) {
    if(raiz == NULL)
        return 0;
    if(*raiz == NULL)
        return 0;
    int alt_esq = totalNO_ArvAVL(&((*raiz)->esq));
    int alt_dir = totalNO_ArvAVL(&((*raiz)->dir));
    return (alt_esq + alt_dir + 1);
}

void preOrdem_ArvAVL(ArvAVL *raiz) {
    if(raiz == NULL)
        return;
    if(*raiz != NULL) {
        printf("Nome: %s \n", (*raiz)->pessoa.nome);
        printf("Numero: %d \n", (*raiz)->pessoa.numero);
        printf("Endereco: %s \n", (*raiz)->pessoa.endereco);
        printf("\n");
        preOrdem_ArvAVL(&((*raiz)->esq));
        preOrdem_ArvAVL(&((*raiz)->dir));
    }
}

void emOrdem_ArvAVL(ArvAVL *raiz) {
    if(raiz == NULL)
        return;
    if(*raiz != NULL) {
        emOrdem_ArvAVL(&((*raiz)->esq));
        printf("Nome: %s \n", (*raiz)->pessoa.nome);
        printf("Numero: %d \n", (*raiz)->pessoa.numero);
        printf("Endereco: %s \n", (*raiz)->pessoa.endereco);
        printf("\n");
        emOrdem_ArvAVL(&((*raiz)->dir));
    }
}

void posOrdem_ArvAVL(ArvAVL *raiz) {
    if(raiz == NULL)
        return;
    if(*raiz != NULL) {
        posOrdem_ArvAVL(&((*raiz)->esq));
        posOrdem_ArvAVL(&((*raiz)->dir));
        printf("Nome: %s \n", (*raiz)->pessoa.nome);
        printf("Numero: %d \n", (*raiz)->pessoa.numero);
        printf("Endereco: %s \n", (*raiz)->pessoa.endereco);
        printf("\n");
    }
}

int consulta_ArvAVL(ArvAVL *raiz, int numero) {
    if(raiz == NULL)
        return 0;
    struct NO *atual = *raiz;
    while(atual != NULL) {
        if(numero == atual->pessoa.numero) {
            printf("%s\n", atual->pessoa.nome);
            printf("%s\n", atual->pessoa.endereco);
            printf("%d\n", atual->pessoa.numero);
            return 1;
        }
        if(numero > atual->pessoa.numero)
            atual = atual->dir;
        else
            atual = atual->esq;
    }
    return 0;
}

//Calcula a altura de um no
int altura_NO(struct NO *no) {
    if(no == NULL)
        return -1;
    else
        return no->alt;
}

//Calcula o fator de balanceamento de um no
int fatorBalanceamento_NO(struct NO *no) {
    // labs serve para pegar apenas o modulo retirando o positivo ou negativo
    return labs(altura_NO(no->esq) - altura_NO(no->dir));
}

//Calcula o maior valor
int maior(int x, int y) {
    if(x > y)
        return x;
    else
        return y;
}

void RotacaoLL(ArvAVL *raiz) {
    struct NO *no;
    no = (*raiz)->esq;
    (*raiz)->esq = no->dir;
    no->dir = *raiz;
    (*raiz)->alt = maior(altura_NO((*raiz)->esq), altura_NO((*raiz)->dir)) + 1;
    no->alt = maior(altura_NO(no->esq), (*raiz)->alt) + 1;
    (*raiz) = no;
}

void RotacaoRR(ArvAVL *raiz) {
    struct NO *no;
    no = (*raiz)->dir;
    (*raiz)->dir = no->esq;
    no->esq = (*raiz);
    (*raiz)->alt = maior(altura_NO((*raiz)->esq), altura_NO((*raiz)->dir)) + 1;
    no->alt = maior(altura_NO(no->dir), (*raiz)->alt) + 1;
    (*raiz) = no;
}

void RotacaoLR(ArvAVL *raiz) {
    RotacaoRR(&(*raiz)->esq);
    RotacaoLL(raiz);
}

void RotacaoRL(ArvAVL *raiz) {
    RotacaoLL(&(*raiz)->dir);
    RotacaoRR(raiz);
}

int insere_ArvAVL(ArvAVL *raiz, struct dados pessoa) {
    int res;
    if(*raiz == NULL) { //arvore vazia ou no folha
        struct NO *novo;
        novo = (struct NO*) malloc(sizeof(struct NO));
        if(novo == NULL)
            return 0;
        novo->pessoa = pessoa;
        novo->alt = 0;
        novo->esq = NULL;
        novo->dir = NULL;
        *raiz = novo;
        return 1;
    }
    struct NO *atual = *raiz;
    if(pessoa.numero < atual->pessoa.numero) {
        if((res = insere_ArvAVL(&(atual->esq), pessoa)) == 1) {
            if(fatorBalanceamento_NO(atual) >= 2) {
                if(pessoa.numero < (*raiz)->esq->pessoa.numero) {
                    RotacaoLL(raiz);
                }else{
                    RotacaoLR(raiz);
                }
            }
        }
    }else{
        if(pessoa.numero > atual->pessoa.numero) {
            if((res = insere_ArvAVL(&(atual->dir), pessoa)) == 1) {
                if(fatorBalanceamento_NO(atual) >= 2) {
                    if((*raiz)->dir->pessoa.numero < pessoa.numero) {
                        RotacaoRR(raiz);
                    }else{
                        RotacaoRL(raiz);
                    }
                }
            }
        }else{
            printf("Valor duplicado!!\n");
            return 0;
        }
    }
    atual->alt = maior(altura_NO(atual->esq), altura_NO(atual->dir)) + 1;
    return res;
}

struct NO* procuraMenor(struct NO* atual) {
    struct NO *no1 = atual;
    struct NO *no2 = atual->esq;
    while(no2 != NULL) {
        no1 = no2;
        no2 = no2->esq;
    }
    return no1;
}

int remove_ArvAVL(ArvAVL *raiz, int numero) {
    if(*raiz == NULL) { //valor nao existe
        printf("valor nao existe!!\n");
        return 0;
    }
    int res;
    if(numero < (*raiz)->pessoa.numero) {
        if((res = remove_ArvAVL(&(*raiz)->esq, numero)) == 1) {
            if(fatorBalanceamento_NO(*raiz) >= 2) {
                if(altura_NO((*raiz)->dir->esq) <= altura_NO((*raiz)->dir->dir))
                    RotacaoRR(raiz);
                else
                    RotacaoRL(raiz);
            }
        }
    }
    if((*raiz)->pessoa.numero < numero) {
        if((res = remove_ArvAVL(&(*raiz)->dir, numero)) == 1) {
            if(fatorBalanceamento_NO(*raiz) >= 2) {
                if(altura_NO((*raiz)->esq->dir) <= altura_NO((*raiz)->esq->esq))
                    RotacaoLL(raiz);
                else
                    RotacaoLR(raiz);
            }
        }
    }
    if((*raiz)->pessoa.numero == numero) {
        if((*raiz)->esq == NULL || (*raiz)->dir == NULL) {
            struct NO *oldNode = (*raiz);
            if((*raiz)->esq != NULL)
                *raiz = (*raiz)->esq;
            else
                *raiz = (*raiz)->dir;
            free(oldNode);
        }else{ //no tem 2 filhos
            struct NO *temp = procuraMenor((*raiz)->dir);
            (*raiz)->pessoa.numero = temp->pessoa.numero;
            remove_ArvAVL(&(*raiz)->dir, numero);
            if(fatorBalanceamento_NO(*raiz) >= 2) {
                if(altura_NO((*raiz)->esq->dir) <= altura_NO((*raiz)->esq->esq))
                    RotacaoLL(raiz);
                else
                    RotacaoLR(raiz);
            }
        }
        return 1;
    }
    return res;
}

/*
void percorre_ArvAVL(ArvAVL *raiz, ListaDin *li) {
    if(raiz == NULL)
        return;
    if(*raiz != NULL) {
        percorre_ArvAVL(&((*raiz)->esq));
        struct dados pessoa;
        pessoa.nome = (*raiz)->pessoa.nome;
        pessoa.numero = (*raiz)->pessoa.numero;
        pessoa.endereco = (*raiz)->pessoa.endereco;
        insere_lista_ordenada(li, pessoa);
        percorre_ArvAVL(&((*raiz)->dir));
    }
}
*/