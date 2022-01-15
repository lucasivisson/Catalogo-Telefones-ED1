#include "ListaDinEncad.h"
#include "ArvoreAVL.h"

typedef struct NO *ArvAVL;

typedef struct hash Hash;

Hash* criaHash(int TABLE_SIZE);
void liberaHash(Hash* ha);
int valorString(char *str);
int insereHash_SemColisao(Hash *ha, struct discagem ddd, struct dados pessoa);
int buscaHash_SemColisao(Hash *ha, int prefixo, ArvAVL *arv);
void imprimirTabelaOrdenadaNumero(int TABLE_SIZE, Hash *ha);
void imprimirTabelaOrdenadaNome(int TABLE_SIZE, Hash *ha);