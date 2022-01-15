#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "TabelaHash.h"

struct elemento{
  struct discagem ddd;
  ArvAVL *arv;
  struct elemento *prox;
};

typedef struct elemento Elem;

typedef struct NO *ArvAVL;

struct hash {
    int qtd, TABLE_SIZE;
    Lista **itens;
};

Hash* criaHash(int TABLE_SIZE) {
    Hash *ha = (Hash *) malloc(sizeof(Hash));
    if(ha != NULL) {
        int i;
        ha->TABLE_SIZE = TABLE_SIZE;
        ha->itens = (Lista**) malloc(TABLE_SIZE * sizeof(Lista*));
        if(ha->itens == NULL) {
            free(ha);
            return NULL;
        }
        ha->qtd = 0;
        for(i=0; i<ha->TABLE_SIZE; i++)
            ha->itens[i] = NULL;
    }
    return ha;
}

void liberaHash(Hash *ha) {
    if(ha != NULL) {
        int i;
        for(i=0; i<ha->TABLE_SIZE; i++) {
            if(ha->itens[i] != NULL)
                free(ha->itens[i]);
        }
        free(ha->itens);
        free(ha);
    }
}

/*
Método da Divisao: Consiste em calcular o "resto da divisão" do valor inteiro que
representa o elemento pelo tamanho da tabela, "TABLE_SIZE".
- A operação de "E bit-a-bit" com o valor 0x7FFFFFFF elimina o bit de sinal do
valor da "chave".
- Evita o risco de ocorrer um overflow e obtermos um número negativo
*/

int chaveDivisao(int chave, int TABLE_SIZE) {
    return (chave & 0x7FFFFFFF) % TABLE_SIZE;
}

/*
Método da Multiplicação: Usa o valor "A", "0 < A < 1", para multiplicar o valor da
"chave" que representa o elemento. Em seguida, a "parte fracionaria" resultante é
multiplicada pelo tamanho da tabela para calcular a posição do elemento
*/

int chaveMultiplicacao(int chave, int TABLE_SIZE) {
    float A = 0.6180339887; // constante 0 < A < 1
    float val = chave * A;
    val = val - (int) val;
    return (int) (TABLE_SIZE * val);
}

/*
Método da Dobra: Utiliza um esquema de dobrar e somar os dígitos do valor para calcular
a sua posição.
- Considera o "valor inteiro" que representa o elemento como uma sequência de dígitos
escritos num pedaço de papel. Enquanto esse valor for maior que o tamanho da tabela, o
papel é dobrado e os dígitos sobrepostos são somados, desconsiderando-se as dezenas.
- Pode ser usado com valores binários.
- Utiliza a operação de "ou exclusivo"
- A dobra é realizada de "k em k bits" o que resulta em um valor de posição entre "0 e 2k+1"
*/

int chaveDobra(int chave, int TABLE_SIZE) {
    int num_bits = 10;
    int parte1 = chave >> num_bits;
    int parte2 = chave & (TABLE_SIZE-1);
    return (parte1 ^ parte2);
}

/*
"Tratando uma string como chave"
- Calcular um valor numérico a partir dos valores ASCII dos caracteres
- Devemos considerar a posição da letra
"Cuidado"
- Não devemos apenas somar os caracteres, pois palavras com letras trocadas irão
produzir o mesmo valor
cama: 99 + 97 + 109 + 97 = 402
maca: 109 + 97 + 99 + 97 = 402
*/

int valorString(char *str) {
    int i, valor = 7;
    int tam = strlen(str);
    for(i=0; i < tam; i++)
        valor = 31 * valor + (int) str[i];
    return valor;
}

int insereHash_SemColisao(Hash *ha, struct discagem ddd, struct dados pessoa) {
    if(ha == NULL || ha->qtd == ha->TABLE_SIZE)
        return 0;
    int chave = ddd.prefixo;
    int i, pos;
    pos = chaveDivisao(chave, ha->TABLE_SIZE);
    if(ha->itens[pos] == NULL) {
        ha->itens[pos] = cria_lista();
    }
    Elem *aux;
    aux = *ha->itens[pos];
    int arvoreExiste = 0;
    while(aux != NULL){
        if(aux->ddd.prefixo == ddd.prefixo) {
            int resultInsereArv = insere_ArvAVL(aux->arv, pessoa);
            if(resultInsereArv) {
                arvoreExiste = 1;
                ha->qtd++;
                return 1;
            }
        }
      aux = aux->prox;
    }
    if(arvoreExiste == 0) {
        ArvAVL *arv = cria_ArvAVL();
        int result = insere_lista_final(ha->itens[pos], arv, ddd);
        if(result == 1) {
            int resultInsereArv = insere_ArvAVL(arv, pessoa);
            if(resultInsereArv == 1) {
                ha->qtd++;
                return 1;
            }
        }
        return 0;
    }
    return 0;
}

int buscaHash_SemColisao(Hash *ha, int prefixo, ArvAVL *arv) {
    if(ha == NULL)
        return 0;
    int pos = chaveDivisao(prefixo, ha->TABLE_SIZE);
    if(ha->itens[pos] == NULL)
        return 0;
    int result = busca_lista_ddd(ha->itens[pos], prefixo, arv);
    if(result == 1) {
        return 1;
    }
    return 0;
}

void imprimirTabelaOrdenadaNumero(int TABLE_SIZE, Hash *ha) {
    int i, existePessoa = 0;
    printf("\n------------------------TABELA--------------------------\n");
    for(i = 0; i < TABLE_SIZE; i++) {
        if(tamanho_lista(ha->itens[i]) > 0) {
            Elem *aux;
            aux = *ha->itens[i];
            printf("DDD: %d\n", aux->ddd.prefixo);
            int result = imprimirLista(ha->itens[i]);
            if(existePessoa == 0 && result != 0) {
                existePessoa++;
            }
        }
    }
    if(existePessoa == 0) {
        printf("Nao existe pessoas cadastradas no catalogo.\n");
    }
    printf("----------------------FIM TABELA------------------------\n");
}

void imprimirTabelaOrdenadaNome(int TABLE_SIZE, Hash *ha) {
    printf("\n------------------------TABELA--------------------------\n");
    for(i = 0; i < TABLE_SIZE; i++) {
        if(tamanho_lista(ha->itens[i]) > 0) {
            Elem *aux;
            aux = *ha->itens[i];
            printf("DDD: %d\n", aux->ddd.prefixo);
            int result = imprimirLista(ha->itens[i]);
            if(existePessoa == 0 && result != 0) {
                existePessoa++;
            }
        }
    }
    printf("----------------------FIM TABELA------------------------\n");
}