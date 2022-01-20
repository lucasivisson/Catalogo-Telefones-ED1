#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArvoreAVL.h"
#include "ListaDinEncad.h"
#include "TabelaHash.h"
#include <time.h>

// funcao responsavel por inserir os dados na tabela hash.
int inserir_ArvAVL_DDD(int ddd, Hash *ha, int numero) {
    char nome[100];
    printf("Digite o nome: ");
    scanf(" %[^\n]s", nome);
    char endereco[100];
    printf("Digite o endereço: ");
    scanf(" %[^\n]s", endereco);

    struct dados pessoa;
    pessoa.numero = numero;
    strcpy(pessoa.nome, nome);
    strcpy(pessoa.endereco, endereco);
    
    switch(ddd) {
        case 85:
        {
            struct discagem ddd = {85, "Ceará", "Fortaleza e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 11:
        {
            struct discagem ddd = {11, "São Paulo", "São Paulo e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }  

        case 12:
        {
            struct discagem ddd = {12, "São Paulo", "são José do Campos e Taubaté"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 13:
        {
            struct discagem ddd = {13, "São Paulo", "Santos e Baixada Santista"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 14:
        {
            struct discagem ddd = {14, "São Paulo", "Bauru e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

            case 15:
        {
            struct discagem ddd = {15, "São Paulo", "Itapetininga, Itapeva e Sorocaba"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 16:
        {
            struct discagem ddd = {16, "São Paulo", "Araraquara, Franca, Ribeirão Preto e São Carlos"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 17:
        {
            struct discagem ddd = {17, "São Paulo", "Catadunva, Barretos e São José do Rio Preto"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 18:
        {
            struct discagem ddd = {18, "São Paulo", "Presidente Prudente e Araçatuba"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

         case 19:
        {
            struct discagem ddd = {19, "São Paulo", "Americana e Campinas"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 21:
        {
            struct discagem ddd = {21, "Rio de Janeiro", "Rio de Janeiro e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 22:
        {
            struct discagem ddd = {22, "Rio de Janeiro", "Cabo Frio e Nova Friburgo"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 24:
        {
            struct discagem ddd = {24, "Rio de Janeiro", "Angras dos Reis e Volta Redonda"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 27:
        {
            struct discagem ddd = {27, " Espirito Santo", "Vitoria e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 28:
        {
            struct discagem ddd = {28, "Espirito Santo", "Cachoeiro de Itapemirim, Castelo e Marataizes"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 31:
        {
            struct discagem ddd = {31, "Minas Gerais", "Belo Horizonte e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 32:
        {
            struct discagem ddd = {32, "Minas Gerais", "Juiz de Fora e Barbacena"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 33:
        {
            struct discagem ddd = {33, "Minas Gerais", "Governador Valadares, Teofilo Otoni, Caratinga e Manhuaçu"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 34:
        {
            struct discagem ddd = {34, "Minas Gerais", "Uberlandia e Uberaba"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 35:
        {
            struct discagem ddd = {35, "Minas Gerais", "Poços de Calda e Varginha"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 37:
        {
            struct discagem ddd = {37, "Minas Gerais", "Divinopolis e Itauna"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 38:
        {
            struct discagem ddd = {38, "Minas Gerais", "Diamantina, Monstes Claros e unai"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 41:
        {
            struct discagem ddd = {41, "Parana", "Curitiba e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 42:
        {
            struct discagem ddd = {42, "Parana", "Ponta Grossa e Guarapuava"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 43:
        {
            struct discagem ddd = {43, "Parana", "Apucarana e Londrina"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 44:
        {
            struct discagem ddd = {44, "Parana", "Maringa, Campo Mourao e Umuarama"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 45:
        {
            struct discagem ddd = {45, "Parana", "Cascavel e Foz do Iguaçu"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 46:
        {
            struct discagem ddd = {46, "Parana", "Francisco Beltrao e Pato Branco"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 47:
        {
            struct discagem ddd = {47, "Santa Catarina", "Balneário, Blumenau, Itajai e Joinville"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 48:
        {
            struct discagem ddd = {48, "Santa Catarina", "Florianopolis e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 49:
        {
            struct discagem ddd = {49, "Santa Catarina", "Caçador e Chapeco"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 51:
        {
            struct discagem ddd = {51, "Rio Grande do Sul", "Porto Alegre e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 53:
        {
            struct discagem ddd = {53,  "Rio Grande do Sul", "Pelotas e Rio Grande"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 54:
        {
            struct discagem ddd = {54,  "Rio Grande do Sul", "Caxias do Sul e Passo Fundo"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 55:
        {
            struct discagem ddd = {55,  "Rio Grande do Sul", "Santa Maria, Santana do livramento, Santo Angelo e Uruguaiana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 61:
        {
            struct discagem ddd = {61,  "Distrito Federal", "Distrito Federal"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 62:
        {
            struct discagem ddd = {62,  "Goias", "Goiania e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 63:
        {
            struct discagem ddd = {63, "Tocatins", "Tocantins"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 64:
        {
            struct discagem ddd = {64, "Goias", "Caldas Novas, Catalao,Itumbiara e Rio Verde"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 65:
        {
            struct discagem ddd = {65, "Mato Grosso", "Cuiaba e Região"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 66:
        {
            struct discagem ddd = {66, "Mato Grosso", "Rondonopolis e Sinop"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 67:
        {
            struct discagem ddd = {67, "Mato Grosso do Sul", "Mato Grosso do Sul"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

       case 68:
        {
            struct discagem ddd = {68, "Acre", "Acre"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 69:
        {
            struct discagem ddd = {69, "Rondonia", "Rondonia"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 71:
        {
            struct discagem ddd = {71, "Bahia", "Salvador e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 73:
        {
            struct discagem ddd = {73, "Bahia", "Ilheus e Itabuna"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        
       case 74:
        {
            struct discagem ddd = {74, "Bahia", "Juazeiro e Irecer"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 75:
        {
            struct discagem ddd = {75, "Bahia", "Feira de Santana e Alagoinhas"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 77:
        {
            struct discagem ddd = {77, "Bahia", "Vitoria da conquista e Barreiras"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 79:
        {
            struct discagem ddd = {79, "Sergipe", "Sergipe"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 81:
        {
            struct discagem ddd = {81, "Pernambuco", "Recife e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 82:
        {
            struct discagem ddd = {82, "Alagoas", "Alagoas"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 83:
        {
            struct discagem ddd = {83, "Paraiba", "Paraiba"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 84:
        {
            struct discagem ddd = {84, "Rio Grande do Norte", "Rio Grande do Norte"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 86:
        {
            struct discagem ddd = {86, "Piaui", "Teresina e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 87:
        {
            struct discagem ddd = {87, "Pernambuco", "Petrolina e Serra Talhada"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 88:
        {
            struct discagem ddd = {88, "Ceara", "Sobral e Juazeiro do Norte"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 89:
        {
            struct discagem ddd = {89, "Piaui", "Picos e Floriano"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 91:
        {
            struct discagem ddd = {91, "Para", "Belem e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 92:
        {
            struct discagem ddd = {92, "Amazonas", "Manaus e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 93:
        {
            struct discagem ddd = {93, "Para", "Santarem e Altamira"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 94:
        {
            struct discagem ddd = {94, "Para", "Santarem e Altamira"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }

        case 95:
        {
            struct discagem ddd = {95, "Roraima", "Roraima"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 96:
        {
            struct discagem ddd = {96, "Amapa", "Amapa"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 97:
        {
            struct discagem ddd = {97, "Amazonas", "Abrangencia Interior do Estado"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 98:
        {
            struct discagem ddd = {98, "Maranhao", "São Luis e Região Metropolitana"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        case 99:
        {
            struct discagem ddd = {99, "Maranhao", "Caxias, condo e imperatriz"};
            int inserePessoaTabelaHash = insereHash(ha, ddd, pessoa);
            if(inserePessoaTabelaHash == 1)
                return 1;
            else{
                return 0;
            }
            break;
        }
        default:
            printf("Digite um DDD valido");
    }
}

// funcao responsavel por buscar os dados de uma pessoa na tabela hash.
int busca_ArvAVL(Hash *ha, int ddd, int numero, ArvAVL *arv2) {
    int consultaHashListaArv = buscaHash(ha, ddd, arv2);
    if(consultaHashListaArv == 1) {
        int resultConsulta = consulta_ArvAVL(arv2, numero);
        if(resultConsulta == 1)
            return 1;
    }
    return 0;
}

// funcao responsavel por excluir uma pessoa da tabela hash
int excluiPessoa_ArvAVL(Hash *ha, int ddd, int numero, ArvAVL *arvExclusao) {
    int consultaHashListaArv = buscaHash(ha, ddd, arvExclusao);
    if(consultaHashListaArv == 1) {
        int resultAlturaAntes = altura_ArvAVL(arvExclusao);
        int resultExclusao = remove_ArvAVL(arvExclusao, numero);
        if(resultExclusao == 1) {
            printf("A altura da arvore antes da exclusao era: %d\n", resultAlturaAntes);
            int resultAlturaDepois = altura_ArvAVL(arvExclusao);
            printf("A altura da arvore depois da exclusao e: %d\n", resultAlturaDepois);
            return 1;
        }
    }
    return 0;
}

// funcao responsavel por imprimir os dados da pessoa escolhida em diferentes formas
int impressao_ArvAVL(Hash *ha, int ddd, ArvAVL *arv3){
    int consultaHashListaArv = buscaHash(ha, ddd, arv3);
    if (consultaHashListaArv == 1){
        int resposta;

        do{
            printf("Escolha uma opcao:\n");
            printf("1 - Pre-Ordem\n");
            printf("2 - Em-Ordem\n");
            printf("3 - Pos-Ordem\n");
            printf("4 - Sair\n");
            scanf(" %d", &resposta);

            switch (resposta){
            case 1:
                preOrdem_ArvAVL(arv3);
                break;

            case 2:
                emOrdem_ArvAVL(arv3);
                break;

            case 3:
                posOrdem_ArvAVL(arv3);
                break;
            
            default:
                printf("Digite uma opcao valida!\n");
                break;
            }
        }while(resposta != 4);
        
    }else{
        printf("Não existem números cadastrados nesse DDD.\n");
    }
}

//Gerador dos numeros de telefones
int gerador_numero(){
    int i, n = 9; //para o primeiro digito ser 9;

	for (i=1; i < 9; i++){
        srand(rand()); //Gera um valor aleatoria que serve como inicial para a funcao rand() do for.
		n = n * 10; //Adiciona um 0 ao numero para concaternar com os novos numeros gerados.
		n += rand() % 9; // gera os numeros no intervalo de 0 a 9.
	}

	return n;   
}

// funcao que gera numeros de telefone validos e que n estejam cadastrados no sistema ainda
int* gerar_telefones(ArvAVL *arv, int ddd){
    int* numero = malloc(3 * sizeof(int));
    int i;

    printf("Sugestao de numeros: \n");
    if(arv == NULL) {
        for(i = 0; i < 3; i++){
            numero[i] = gerador_numero();
            printf("  %d - %d\n", i+1, numero[i]);
        }
        return numero;
    }else {
        for(i = 0; i < 3; i++){
            numero[i] = gerador_numero();
            int res = consulta_ArvAVL(arv, numero[i]);

            if(res == 1){ 
                numero[i] = gerador_numero();
            }else{
                printf("  %d - %d\n", i+1, numero[i]);
            }
        }
        return numero;
    }
}

// funcao para validar ddd
int validarDDD(int ddd) {
    if(ddd == 11 || ddd == 12 || ddd == 13 || ddd == 14 || ddd == 15 || ddd == 16 || ddd == 17 || ddd == 18 || ddd == 19 || ddd == 21 || ddd == 22 || ddd == 24 || ddd == 27 || ddd == 28|| ddd == 31 || ddd == 32 || ddd == 33 || ddd == 34 || ddd == 35 || ddd == 37 || ddd == 38 || ddd == 41 || ddd == 42 || ddd == 43 || ddd == 44 || ddd == 45 || ddd == 46 || ddd == 47 || ddd == 48 || ddd == 51 || ddd == 53 || ddd == 54 || ddd == 55 || ddd == 61 || ddd == 62 || ddd == 63 || ddd == 64 || ddd == 65 || ddd == 66 || ddd == 67 || ddd == 68 || ddd == 69 || ddd == 71 || ddd == 73 || ddd == 74 || ddd == 75 || ddd == 77 || ddd == 79 || ddd == 81 || ddd == 82 || ddd == 83 || ddd == 84 || ddd == 85 || ddd == 86 || ddd == 87 || ddd == 88 || ddd == 89 || ddd == 91 || ddd == 92 || ddd == 93 || ddd == 94 || ddd == 95 || ddd == 96 || ddd == 97 || ddd == 98 || ddd == 99) {
        return 1;
    }
    return 0;
}

// funcao que gera uma lista ordenada por numero e nome dos dados cadastrados no sistema
void gerarListaTabelaHash(Hash *ha) {
    int opcao;
    do{
        printf("Gerar lista ordenada por: \n");
        printf("1 - Numero\n");
        printf("2 - Nome\n");
        printf("3 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
            {
                imprimirTabelaOrdenadaNumero(1427, ha);
                break;
            }
            case 2:
            {
                imprimirTabelaOrdenadaNome(1427, ha);
                break;
            }
            case 3:
            {
                break;
            }

            default:
                printf("Escolha uma opcao valida.\n");
                break;
        }
    }while(opcao != 3);
}

// funcao que gera telefones e o usuario escolho um deles para cadastrar no sistema
int inserirNumeroAleatorio(Hash *ha, int ddd) {
    ArvAVL *arv6 = cria_ArvAVL();
    int* telefone = malloc(3 * sizeof(int));

    buscaHash(ha, ddd, arv6);
    int op = 1;
    do{
        telefone = gerar_telefones(arv6, ddd);
        printf("\n");
        printf("Gostaria de cadastrar algum dos numeros?\n");
        printf("  1 - Sim\n");
        printf("  2 - Gerar novos numeros\n");
        printf("  3 - Sair\n");
        scanf(" %d", &op);

        switch(op){
            case 1:
            {
                int n;
                printf("\n");
                printf("Escolha um dos numeros gerados:\n");
                for(int i = 0; i < 3; i++){
                    printf("  %d - %d\n", i+1, telefone[i]);
                }
                scanf(" %d", &n);

                int telefone2 = telefone[n-1];
                return telefone2;
            }
            break;

            case 2:
                op = 2;
            break;

            case 3:
                printf("Saindo...");
            break;

            default:
                printf("Opcao selecionada nao e valida\n");
        }
    }while(op == 2);
}

int main() {
    Hash *ha = criaHash(1427);
    int escolha;
    printf("Bem vindo ao Catalogo Nacional de Telefones e Endereços\n");

    do{
        printf("Escolha a opcao que você deseja escolher: \n");
        printf("1 - Inserir uma pessoa no catalogo\n");
        printf("2 - Buscar pessoa no catalogo pelo telefone\n");
        printf("3 - Remover pessoa do catalogo\n");
        printf("4 - Listar todos os numeros de telefone por DDD\n");
        printf("5 - Gerar lista telefonica por DDD\n");
        printf("6 - Sair\n");
        scanf(" %d", &escolha);

        switch(escolha) {
            case 1:
            {
                int ddd, numero, escolhaNumero;
                printf("Digite o numero do DDD da pessoa a ser inserida: \n");
                scanf(" %d", &ddd);
                int resultDDD = validarDDD(ddd);
                if(resultDDD != 1) {
                    printf("Digite um DDD valido\n");
                    break;
                }
                do{
                    printf("Voce deseja digitar o numero ou escolher um numero que ainda nao esteja cadastrado no programa?\n");
                    printf("1 - Digitar um numero\n");
                    printf("2 - Escolher um numero gerado\n");
                    scanf("%d", &escolhaNumero);
                    switch(escolhaNumero) {
                        case 1:
                            printf("Digite o numero do telefone: ");
                            scanf(" %d", &numero);
                            break;
                        
                        case 2:
                            numero = inserirNumeroAleatorio(ha, ddd);
                            break;

                        default:
                            printf("Opcao invalida, tente novamente!\n");
                            break;
                    }
                }while(escolhaNumero != 1 && escolhaNumero != 2);
                int resultInserir = inserir_ArvAVL_DDD(ddd, ha, numero);
                if(resultInserir == 1) {
                    printf("Pessoa inserida com sucesso!\n");
                }else{
                    printf("Erro ao inserir pessoa!\n");
                }
                break;
            }

            case 2:
            {
                int numero, ddd;
                ArvAVL *arv2 = cria_ArvAVL();
                printf("Digite o DDD do telefone da pessoa a ser buscada: \n");
                scanf(" %d", &ddd);
                int resultDDD = validarDDD(ddd);
                if(resultDDD != 1) {
                    printf("Digite um DDD valido\n");
                    break;
                }
                printf("Digite o numero do telefone da pessoa a ser buscada: \n");
                scanf(" %d", &numero);
                int resultBusca = busca_ArvAVL(ha, ddd, numero, arv2);
                if(resultBusca != 1) {
                    printf("Pessoa nao esta cadastrada no catalogo\n");
                    break;
                }
                break;
            }

            case 3:
            {
                int numero, ddd;
                ArvAVL *arvExclusao = cria_ArvAVL();
                printf("Digite o DDD do telefone da pessoa a ser buscada: \n");
                scanf(" %d", &ddd);
                int resultDDD = validarDDD(ddd);
                if(resultDDD != 1) {
                    printf("Digite um DDD valido\n");
                    break;
                }
                printf("Digite o numero do telefone da pessoa a ser buscada: \n");
                scanf(" %d", &numero);
                int resultExclusao = excluiPessoa_ArvAVL(ha, ddd, numero, arvExclusao);
                if(resultExclusao != 1) {
                    printf("Pessoa nao esta cadastrada no catalogo\n");
                    break;
                }
                printf("Pessoa removida com sucesso!\n");
                break;
            }
            

            case 4:
            {
                int ddd;
                ArvAVL *arv4 = cria_ArvAVL();

                printf("Digite o numero do DDD:\n");
                scanf(" %d", &ddd);
                int resultDDD = validarDDD(ddd);
                if(resultDDD != 1) {
                    printf("Digite um DDD valido\n");
                    break;
                }
                impressao_ArvAVL(ha, ddd, arv4);
                break;
            }

            case 5:
            {
                gerarListaTabelaHash(ha);
                break;
            }

            case 6:
                printf("Saindo...\n");
            break;

            default:
                printf("Opcao selecionada nao e valida\n");
        }
        printf("\n\n");
    } while(escolha != 6);
    return 0;
}