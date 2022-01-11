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

      case 11:
        {
            ArvAVL *arv11 = cria_ArvAVL();
            struct discagem ddd = {11, "São Paulo", "São Paulo e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv11, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv11);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv11);
                    return 0;
                }
            }
            return 0;
        break;
        }  

       case 12:
        {
            ArvAVL *arv12 = cria_ArvAVL();
            struct discagem ddd = {12, "São Paulo", "são José do Campos e Taubaté"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv12, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv12);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv12);
                    return 0;
                }
            }
            return 0;
        break;
        }

         case 13:
        {
            ArvAVL *arv13 = cria_ArvAVL();
            struct discagem ddd = {13, "São Paulo", "Santos e Baixada Santista"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv13, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv13);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv13);
                    return 0;
                }
            }
            return 0;
        break;
        }

         case 14:
        {
            ArvAVL *arv14 = cria_ArvAVL();
            struct discagem ddd = {14, "São Paulo", "Bauru e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv14, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv14);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv14);
                    return 0;
                }
            }
            return 0;
        break;
        }
        
         case 15:
        {
            ArvAVL *arv11 = cria_ArvAVL();
            struct discagem ddd = {15, "São Paulo", "Itapetininga, Itapeva e Sorocaba"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv15, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv15);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv15);
                    return 0;
                }
            }
            return 0;
        break;
        }

         case 16:
        {
            ArvAVL *arv15 = cria_ArvAVL();
            struct discagem ddd = {16, "São Paulo", "Araraquara, Franca, Ribeirão Preto e São Carlos"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv16, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv16);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv16);
                    return 0;
                }
            }
            return 0;
        break;
        }

         case 17:
        {
            ArvAVL *arv17 = cria_ArvAVL();
            struct discagem ddd = {17, "São Paulo", "Catadunva, Barretos e São José do Rio Preto"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv17, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv17);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv17);
                    return 0;
                }
            }
            return 0;
        break;
        }

         case 18:
        {
            ArvAVL *arv18 = cria_ArvAVL();
            struct discagem ddd = {18, "São Paulo", "Presidente Prudente e Araçatuba"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv18, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv18);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv18);
                    return 0;
                }
            }
            return 0;
        break;
        }

         case 19:
        {
            ArvAVL *arv19 = cria_ArvAVL();
            struct discagem ddd = {19, "São Paulo", "Americana e Campinas"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv19, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv19);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv19);
                    return 0;
                }
            }
            return 0;
        break;
        }

         case 21:
        {
            ArvAVL *arv21 = cria_ArvAVL();
            struct discagem ddd = {21, "Rio de Janeiro", "Rio de Janeiro e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv21, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv21);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv21);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 22:
        {
            ArvAVL *arv22 = cria_ArvAVL();
            struct discagem ddd = {22, "Rio de Janeiro", "Cabo Frio e Nova Friburgo"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv22, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv22);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv22);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 24:
        {
            ArvAVL *arv24 = cria_ArvAVL();
            struct discagem ddd = {24, "Rio de Janeiro", "Angras dos Reis e Volta Redonda"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv24, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv24);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv24);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 27:
        {
            ArvAVL *arv27 = cria_ArvAVL();
            struct discagem ddd = {27, " Espirito Santo", "Vitoria e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv27, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv27);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv27);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 28:
        {
            ArvAVL *arv28 = cria_ArvAVL();
            struct discagem ddd = {28, "Espirito Santo", "Cachoeiro de Itapemirim, Castelo e Marataizes"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv28, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv28);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv28);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 31:
        {
            ArvAVL *arv31 = cria_ArvAVL();
            struct discagem ddd = {31, "Minas Gerais", "Belo Horizonte e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv31, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv31);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv31);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 32:
        {
            ArvAVL *arv32 = cria_ArvAVL();
            struct discagem ddd = {32, "Minas Gerais", "Juiz de Fora e Barbacena"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv32, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv32);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv32);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 33:
        {
            ArvAVL *arv33 = cria_ArvAVL();
            struct discagem ddd = {33, "Minas Gerais", "Governador Valadares, Teofilo Otoni, Caratinga e Manhuaçu"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv33, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv33);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv33);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 34:
        {
            ArvAVL *arv34 = cria_ArvAVL();
            struct discagem ddd = {34, "Minas Gerais", "Uberlandia e Uberaba"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv34, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv34);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv34);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 35:
        {
            ArvAVL *arv35 = cria_ArvAVL();
            struct discagem ddd = {35, "Minas Gerais", "Poços de Calda e Varginha"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv35, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv35);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv35);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 37:
        {
            ArvAVL *arv37 = cria_ArvAVL();
            struct discagem ddd = {37, "Minas Gerais", "Divinopolis e Itauna"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv37, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv37);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv37);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 38:
        {
            ArvAVL *arv38 = cria_ArvAVL();
            struct discagem ddd = {38, "Minas Gerais", "Diamantina, Monstes Claros e unai"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv38, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv38);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv38);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 41:
        {
            ArvAVL *arv41 = cria_ArvAVL();
            struct discagem ddd = {41, "Parana", "Curitiba e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv41, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv41);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv41);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 42:
        {
            ArvAVL *arv41 = cria_ArvAVL();
            struct discagem ddd = {42, "Parana", "Ponta Grossa e Guarapuava"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv42, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv42);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv42);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 43:
        {
            ArvAVL *arv43 = cria_ArvAVL();
            struct discagem ddd = {43, "Parana", "Apucarana e Londrina"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv43, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv43);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv43);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 44:
        {
            ArvAVL *arv44 = cria_ArvAVL();
            struct discagem ddd = {44, "Parana", "Maringa, Campo Mourao e Umuarama"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv44, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv44);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv44);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 45:
        {
            ArvAVL *arv45 = cria_ArvAVL();
            struct discagem ddd = {45, "Parana", "Cascavel e Foz do Iguaçu"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv45, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv45);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv45);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 46:
        {
            ArvAVL *arv46 = cria_ArvAVL();
            struct discagem ddd = {46, "Parana", "Francisco Beltrao e Pato Branco"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv46, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv46);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv46);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 47:
        {
            ArvAVL *arv47 = cria_ArvAVL();
            struct discagem ddd = {47, "Santa Catarina", "Balneário, Blumenau, Itajai e Joinville"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv47, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv47);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv47);
                    return 0;
                }
            }
            return 0;
        break;
        }
        case 48:
        {
            ArvAVL *arv48 = cria_ArvAVL();
            struct discagem ddd = {48, "Santa Catarina", "Florianopolis e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv48, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv48);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv48);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 49:
        {
            ArvAVL *arv49 = cria_ArvAVL();
            struct discagem ddd = {49, "Santa Catarina", "Caçador e Chapeco"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv49, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv49);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv49);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 51:
        {
            ArvAVL *arv51 = cria_ArvAVL();
            struct discagem ddd = {51, "Rio Grande do Sul", "Porto Alegre e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv51, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv51);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv51);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 53:
        {
            ArvAVL *arv53 = cria_ArvAVL();
            struct discagem ddd = {53, "Rio Grande do Sul", "Pelotas e Rio Grande"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv53, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv53);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv53);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 54:
        {
            ArvAVL *arv54 = cria_ArvAVL();
            struct discagem ddd = {54, "Rio Grande do Sul", "Caxias do Sul e Passo Fundo"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv54, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv54);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv54);
                    return 0;
                }
            }
            return 0;
        break;
        }
        case 55:
        {
            ArvAVL *arv55 = cria_ArvAVL();
            struct discagem ddd = {55, "Rio Grande do Sul", "Santa Maria, Santana do livramento, Santo Angelo e Uruguaiana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv55, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv55);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv55);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 61:
        {
            ArvAVL *arv61 = cria_ArvAVL();
            struct discagem ddd = {61, "Distrito Federal", "Distrito Federal"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv61, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv61);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv61);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 62:
        {
            ArvAVL *arv62 = cria_ArvAVL();
            struct discagem ddd = {62, "Goias", "Goiania e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv62, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv62);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv62);
                    return 0;
                }
            }
            return 0;
        break;
        }
        case 63:
        {
            ArvAVL *arv63 = cria_ArvAVL();
            struct discagem ddd = {63, "Tocatins", "Tocantins"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv63, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv63);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv63);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 64:
        {
            ArvAVL *arv64 = cria_ArvAVL();
            struct discagem ddd = {64, "Goias", "Caldas Novas, Catalao,Itumbiara e Rio Verde"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv64, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv64);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv64);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 65:
        {
            ArvAVL *arv65 = cria_ArvAVL();
            struct discagem ddd = {65, "Mato Grosso", "Cuiaba e Região"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv65, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv65);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv65);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 66:
        {
            ArvAVL *arv66 = cria_ArvAVL();
            struct discagem ddd = {66, "Mato Grosso", "Rondonopolis e Sinop"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv66, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv66);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv66);
                    return 0;
                }
            }
            return 0;
        break;
        }
        case 67:
        {
            ArvAVL *arv67 = cria_ArvAVL();
            struct discagem ddd = {67, "Mato Grosso do Sul", "Mato Grosso do Sul"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv67, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv67);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv67);
                    return 0;
                }
            }
            return 0;
        break;
        }
        
        case 68:
        {
            ArvAVL *arv68 = cria_ArvAVL();
            struct discagem ddd = {68, "Acre", "Acre"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv68, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv68);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv68);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 69:
        {
            ArvAVL *arv69 = cria_ArvAVL();
            struct discagem ddd = {69, "Rondonia", "Rondonia"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv69, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv69);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv69);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 71:
        {
            ArvAVL *arv71 = cria_ArvAVL();
            struct discagem ddd = {71, "Bahia", "Salvador e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv71, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv71);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv71);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 73:
        {
            ArvAVL *arv73 = cria_ArvAVL();
            struct discagem ddd = {73, "Bahia", "Ilheus e Itabuna"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv73, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv73);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv73);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 74:
        {
            ArvAVL *arv74 = cria_ArvAVL();
            struct discagem ddd = {74, "Bahia", "Juazeiro e Irecer"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv74, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv74);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv74);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 75:
        {
            ArvAVL *arv75 = cria_ArvAVL();
            struct discagem ddd = {75, "Bahia", "Feira de Santana e Alagoinhas"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv75, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv75);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv75);
                    return 0;
                }
            }
            return 0;
        break;
        }

         case 77:
        {
            ArvAVL *arv77 = cria_ArvAVL();
            struct discagem ddd = {77, "Bahia", "Vitoria da conquista e Barreiras"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv77, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv77);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv77);
                    return 0;
                }
            }
            return 0;
        break;
        }

         case 79:
        {
            ArvAVL *arv79 = cria_ArvAVL();
            struct discagem ddd = {79, "Sergipe", "Sergipe"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv79, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv79);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv79);
                    return 0;
                }
            }
            return 0;
        break;
        }

         case 81:
        {
            ArvAVL *arv81 = cria_ArvAVL();
            struct discagem ddd = {81, "Pernambuco", "Recife e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv81, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv81);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv81);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 82:
        {
            ArvAVL *arv82 = cria_ArvAVL();
            struct discagem ddd = {82, "Alagoas", "Alagoas"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv82, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv82);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv82);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 83:
        {
            ArvAVL *arv81 = cria_ArvAVL();
            struct discagem ddd = {83, "Paraiba", "Paraiba"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv83, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv83);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv83);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 84:
        {
            ArvAVL *arv84 = cria_ArvAVL();
            struct discagem ddd = {84, "Rio Grande do Norte", "Rio Grande do Norte"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv84, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv84);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv84);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 86:
        {
            ArvAVL *arv86 = cria_ArvAVL();
            struct discagem ddd = {86, "Piaui", "Teresina e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv86, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv86);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv86);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 87:
        {
            ArvAVL *arv81 = cria_ArvAVL();
            struct discagem ddd = {87, "Pernambuco", "Petrolina e Serra Talhada"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv87, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv87);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv87);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 88:
        {
            ArvAVL *arv88 = cria_ArvAVL();
            struct discagem ddd = {81, "Ceara", "Sobral e Juazeiro do Norte"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv88, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv88);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv88);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 89:
        {
            ArvAVL *arv89 = cria_ArvAVL();
            struct discagem ddd = {89, "Piaui", "Picos e Floriano"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv89, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv89);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv89);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 91:
        {
            ArvAVL *arv91 = cria_ArvAVL();
            struct discagem ddd = {91, "Para", "Belem e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv91, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv91);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv91);
                    return 0;
                }
            }
            return 0;
        break;
        }

       case 92:
        {
            ArvAVL *arv92 = cria_ArvAVL();
            struct discagem ddd = {92, "Amazonas", "Manaus e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv92, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv92);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv92);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 93:
        {
            ArvAVL *arv91 = cria_ArvAVL();
            struct discagem ddd = {93, "Para", "Santarem e Altamira"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv93, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv93);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv93);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 94:
        {
            ArvAVL *arv94 = cria_ArvAVL();
            struct discagem ddd = {94, "Para", "Maraba"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv94, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv94);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv94);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 95:
        {
            ArvAVL *arv95 = cria_ArvAVL();
            struct discagem ddd = {95, "Roraima", "Roraima"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv95, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv95);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv95);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 96:
        {
            ArvAVL *arv91 = cria_ArvAVL();
            struct discagem ddd = {96, "Amapa", "Amapa"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv96, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv96);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv96);
                    return 0;
                }
            }
            return 0;
        break;
        }
        case 91:
        {
            ArvAVL *arv97 = cria_ArvAVL();
            struct discagem ddd = {97, "Amazonas", "Abrangencia Interior do Estado"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv97, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv97);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv97);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 98:
        {
            ArvAVL *arv98 = cria_ArvAVL();
            struct discagem ddd = {98, "Maranhao", "São Luis e Região Metropolitana"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv91, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv91);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv91);
                    return 0;
                }
            }
            return 0;
        break;
        }

        case 99:
        {
            ArvAVL *arv99 = cria_ArvAVL();
            struct discagem ddd = {99, "Maranhao", "Caxias, condo e imperatriz"};
            struct dados pessoa;
            pessoa.numero = numero;
            strcpy(pessoa.nome, nome);
            strcpy(pessoa.endereco, endereco);
            int insere = insere_ArvAVL(arv99, pessoa);
            if(insere == 1) {
                int insereArvTabelaHash = insereHash_SemColisao(ha, ddd, arv99);
                if(insereArvTabelaHash == 1)
                    return 1;
                else{
                    libera_ArvAVL(arv99);
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