#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArvoreAVL.h"
#include "ListaDinEncad.h"
#include "TabelaHash.h"

int inserir_ArvAVL_DDD(int ddd, Hash *ha) {
    int numero;
    printf("Digite o número do telefone: ");
    scanf(" %d", &numero);
    char nome[50];
    printf("Digite o nome: ");
    scanf(" %s", nome);
    char endereco[50];
    printf("Digite o endereço: ");
    scanf(" %s", endereco);
    
    switch(ddd) {
        case 85:
        {
            ArvAVL *arv85 = cria_ArvAVL();
            struct discagem ddd = {85, "Ceará", "Fortaleza e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv85, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv85);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv85);
                    return 0;
                }
            }
            return 0;
        break;
        }

        default:
            printf("DDD informado não é válido");
    }
}

int busca_ArvAVL(Hash *ha, int ddd, int numero, ArvAVL *arv2) {
    int consultaHashListaArv = buscaHash_SemColisao(ha, 85, arv2);
    printf("Consultando arvore na tabela hash: %d\n", consultaHashListaArv);
    int consulta = consulta_ArvAVL(arv2, numero);
    printf("Consultando pessoa em ArvoreAVL: %d\n", consulta);
    return 1;
}

int main() {
    Hash *ha = criaHash(1427);
    int escolha;
    printf("Bem vindo ao Catálogo Nacional de Telefones e Endereços\n");

    do{
        printf("Escolha a opção que você deseja escolher: \n");
        printf("1 - Inserir uma pessoa no catálogo\n");
        printf("2 - Buscar pessoa no catálogo pelo telefone\n");
        printf("3 - Remover pessoa do catáogo\n");
        printf("4 - Listar todos os números de telefone por DDD\n");
        printf("5 - Gerar lista telefônica por DDD\n");
        printf("6 - Sair\n");
        scanf(" %d", &escolha);

        switch(escolha) {
            case 1:
            {
                int ddd;
                printf("Digite o número do DDD da pessoa a ser inserida: ");
                scanf(" %d", &ddd);
                int resultInserir = inserir_ArvAVL_DDD(ddd, ha);
                if(resultInserir) {
                    printf("Pessoa inserida com sucesso!");
                }else{
                    printf("Erro ao inserir pessoa!");
                }
            break;
            }

            case 2:
            {
                int numero;
                ArvAVL *arv2 = cria_ArvAVL();
                printf("Digite o número do telefone da pessoa a ser buscada: ");
                scanf(" %d", &numero);
                busca_ArvAVL(ha, 85, numero, arv2); 
            break;
            }

            case 3:
            break;

            case 4:
            break;

            case 5:
            break;

            case 6:
                printf("Saindo...\n");
            break;

            default:
                printf("Opção selecionada não é válida\n");
        }
    } while(escolha != 6);
    /*
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
    */
    return 0;
}