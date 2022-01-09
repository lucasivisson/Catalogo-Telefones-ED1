#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArvoreAVL.h"
#include "ListaDinEncad.h"
#include "TabelaHash.h"

int main() {
    Hash *ha = criaHash(1427);
    ArvAVL *arv = cria_ArvAVL();
    ArvAVL *arv2 = cria_ArvAVL();

    struct dados pessoa;
    pessoa.numero = 997879611;
    strcpy(pessoa.nome , "Lucas");
    strcpy(pessoa.endereco , "Rua 8 casa 540 vila velha");

    int insere = insere_ArvAVL(arv, pessoa);
    printf("Inserindo pessoa em ArvoreAVL: %d\n", insere);

    struct discagem ddd;
    ddd.prefixo = 85;
    strcpy(ddd.estado , "Ceara");
    strcpy(ddd.regiao , "Fortaleza");

    int insereComColisao = insereHash_SemColisao(ha, ddd, arv);
    printf("Inserindo arvore na tabela hash: %d\n", insereComColisao);

    int consultaHashListaArv = buscaHash_SemColisao(ha, 85, arv2);
    printf("Consultando arvore na tabela hash: %d\n", consultaHashListaArv);

    int consulta = consulta_ArvAVL(arv2, pessoa);
    printf("Consultando pessoa em ArvoreAVL: %d\n", consulta);

    return 0;
}