#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "modulos/arredondamento.h"
#include "modulos/exibir_resultados.h"
#include "modulos/juros_composto.h"
#include "funcoes/desimpate.h"
#include "funcoes/sem_desimpate.h"
#include "funcoes/calcular_indice.h"
#include "banco_de_dados/manipulacao_de_dados.h"

struct banco_de_dados
{
    char nome[30];
    int preco;
} banco_de_dados[168];

struct dados /*A onde vai ser carregado o banco de dados*/
{
    char nome[30], email[30];
    int idade;

}dados;

int main()
{
    int resp, marca=0,valor, contador, i1=0, i2=0, i3=0,loop =0,n=0, indice=0;
    int pontuacao[6]={0}, quantidade[6]={0}, k=0, escolha=0;
    float  media[6]={0};

    FILE *arq;

    setlocale(LC_ALL, "Portuguese");

    if ((carregamento())==1)
        printf("\nErro\n");
    else
        system("cls");
    do
    {
        i3=0;
        i2=0;
        i1=0;

        do /*Aqui é zerado o vetor que fica a pontuação de cada item, seja camera, bateria...*/
        {
            pontuacao[loop] = 0;
            loop++;
        }while(loop!=6);
        printf("Bem vindo ao BUSCAPHONE!\n");
        printf("\n---SELFIES--------------------------------------------------");
        n=0;
        do
        {
            printf("\n\tVocê tira muitas selfies (Foto de si mesmo(a))?");
            printf("\n\t\t \"3\" para sim");
            printf("\n\t\t \"2\" para Talvez");
            printf("\n\t\t \"1\" para não");
            printf("\n\t\t Resposta: ");
            scanf("%d",&resp);
                if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
                {
                    quantidade[n]++;
                    pontuacao[n] = pontuacao[n] + resp;
                }
        }while((resp<1)||(resp>3));


        if (resp==2)
        {
            do
            {
                printf("\n\tVocê prente tirar mais fotos com a câmera da frente(frontal) do que com a camera de trâs?");
                printf("\n\t\t \"3\" para sim");
                printf("\n\t\t \"2\" para Talvez");
                printf("\n\t\t \"1\" para não");
                printf("\n\t\t Resposta: ");
                scanf("%d",&resp);
                    if((resp<1)||(resp>3))
                        printf("\n Entrada inválida, tente novamente");
                    else
                    {
                        quantidade[n]++;
                        pontuacao[n] =  pontuacao[n] + resp;
                    }
            }while((resp<1)||(resp>3));
        }

        media[n] = (float) pontuacao[n]/quantidade[n];

        printf("\n---TELA--------------------------------------------------");
        n++;
        do
        {
            printf("\n\tEm média você gasta quanto tempo vendo séries e vídeos?");
            printf("\n\t\t \"3\" para maior que 10 horas");
            printf("\n\t\t \"2\" para entre 6 a 9 horas");
            printf("\n\t\t \"1\" para menos que que 6");
            printf("\n\t\t Resposta: ");
            scanf("%d",&resp);
            if((resp<1)||(resp>3))
                printf("\n Entrada inválida, tente novamente");
            else
            {
                quantidade[n]++;
                pontuacao[n] = pontuacao[n] + resp;
            }
        }while((resp<1)||(resp>3));

        media[n] = (float) pontuacao[n]/quantidade[n];

        printf("\n---CÂMERA--------------------------------------------------");
        n++;
        do
        {
            printf("\n\tPrentede tirar muitas fotos ou gravar muitos vídeos com a camera traseira?");
            printf("\n\t\t \"3\" para sim");
            printf("\n\t\t \"2\" para Talvez");
            printf("\n\t\t \"1\" para não");
            printf("\n\t\t Resposta: ");
            scanf("%d",&resp);
            if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
            {
                quantidade[n]++;
                pontuacao[n] = pontuacao[n] + resp;
            }
        }while((resp<1)||(resp>3));

        if((resp==3)||(resp==2))
        {
            if(resp==2)
            {
                 do
                {
                printf("\n\tVocê pretende tirar fotos somente para o dia a dia?");
                printf("\n\t\t \"3\" para sim");
                printf("\n\t\t \"2\" para Talvez");
                printf("\n\t\t \"1\" para não");
                printf("\n\t\t Resposta: ");
                scanf("%d",&resp);
                if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
                {
                    quantidade[n]++;
                    pontuacao[n] = pontuacao[n] + resp;
                }
                }while((resp<1)||(resp>3));

                do
                {
                    printf("\n\tUtliza as fotos para o meio profissional?");
                    printf("\n\t\t \"3\" para sim");
                    printf("\n\t\t \"2\" para Talvez");
                    printf("\n\t\t \"1\" para não");
                    printf("\n\t\t Resposta: ");
                    scanf("%d",&resp);
                    if((resp<1)||(resp>3))
                        printf("\n Entrada inválida, tente novamente");
                    else
                    {
                        quantidade[n]++;
                        pontuacao[n] = pontuacao[n] + resp;
                    }
                }while((resp<1)||(resp>3));

                do
                {
                    printf("\n\tVocê pretende tirar muitas fotos a noite com a câmera?");
                    printf("\n\t\t \"3\" para sim");
                    printf("\n\t\t \"2\" para Talvez");
                    printf("\n\t\t \"1\" para não");
                    printf("\n\t\t Resposta: ");
                    scanf("%d",&resp);
                    if((resp<1)||(resp>3))
                        printf("\n Entrada inválida, tente novamente");
                    else
                    {
                        quantidade[n]++;
                        pontuacao[n] = pontuacao[n] + resp;
                    }
                }while((resp<1)||(resp>3));
            }
        }

        media[n] = (float) pontuacao[n]/quantidade[n];

        printf("\n---ARMAZENAMENTO--------------------------------------------------");
        n++;
        do
        {
            printf("\n\tPretende guadar as suas fotos em um cartão de memória tradicional?");
            printf("\n\t\t \"3\" para sim");
            printf("\n\t\t \"2\" para Talvez");
            printf("\n\t\t \"1\" para não");
            printf("\n\t\t Resposta: ");
            scanf("%d",&resp);
            if((resp<1)||(resp>3))
                printf("\n Entrada inválida, tente novamente");
            else
            {
                quantidade[n]++;
                pontuacao[n] = pontuacao[n] + resp;
            }
        }while((resp<1)||(resp>3));

        if((resp==1)&&resp==2)
        {
            do
            {
                printf("\n\tUtlizará armazenamento em nuvem(Armazenamento na internet)?");
                printf("\n\t\t \"3\" para sim");
                printf("\n\t\t \"2\" para Tavez");
                printf("\n\t\t \"1\" para Não");
                printf("\n\t\t Resposta: ");
                scanf("%d",&resp);
                if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
                {
                    quantidade[n]++;
                    pontuacao[n] = pontuacao[n] + resp;
                }
            }while((resp<1)||(resp>3));
        }

        media[n] = (float) pontuacao[n]/quantidade[n];

        printf("\n---RAM--------------------------------------------------");
        n++;
        do
        {
            printf("\n\tVocê se considera um jogador nato?");
            printf("\n\t\t \"3\" para sim");
            printf("\n\t\t \"2\" para Talvez");
            printf("\n\t\t \"1\" para não");
            printf("\n\t\t Resposta: ");
            scanf("%d",&resp);
            if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
                {
                    quantidade[n]++;
                    pontuacao[n] = pontuacao[n] + resp;
                }
        }while((resp<1)||(resp>3));

        if(resp==3)
        {
            do
            {
                printf("\n\tVocê usa seu celular com muitas abas abertas em segundo plano");
                printf("\n\t\t \"3\" para sim");
                printf("\n\t\t \"2\" para Talvez");
                printf("\n\t\t \"1\" para não");
                printf("\n\t\t Resposta: ");
                scanf("%d",&resp);
                if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
                {
                    quantidade[n]++;
                    pontuacao[n] = pontuacao[n] + resp;
                }
            }while((resp<1)||(resp>3));
        }

        else if(resp==2)
        {
            do
            {

                printf("\n\tVocê gosta de jogar muito no seu dia-a-dia?");
                printf("\n\t\t \"3\" para sim");
                printf("\n\t\t \"2\" para Talvez");
                printf("\n\t\t \"1\" para não");
                printf("\n\t\t Resposta: ");
                scanf("%d",&resp);
                if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
                {
                    quantidade[n]++;
                    pontuacao[n] = pontuacao[n] + resp;
                }
            }while((resp<1)||(resp>3));

        }else if(resp==3)
        {
            do
            {
                printf("\n\tVocê so joga as vezes?");
                printf("\n\t\t \"3\" para sim");
                printf("\n\t\t \"2\" para Talvez");
                printf("\n\t\t \"1\" para não");
                printf("\n\t\t Resposta: ");
                scanf("%d",&resp);
                if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
                {
                    quantidade[n]++;
                    pontuacao[n] = pontuacao[n] + resp;
                }
           }while((resp<1)||(resp>3));
        }

        media[n] = (float) pontuacao[n]/quantidade[n];

        printf("\n---BATERIA--------------------------------------------------");
        n++;
        do
        {
            printf("\n\tEm média você passa quanto tempo com a tela do seu celular ligada?");
            printf("\n\t\t \"3\" para muito tempo");
            printf("\n\t\t \"2\" para pouco tempo");
            printf("\n\t\t \"1\" para raramente eu ligo");
            printf("\n\t\t Resposta: ");
            scanf("%d",&resp);
            if((resp<1)||(resp>3))
                printf("\n Entrada inválida, tente novamente");
            else
            {
                quantidade[n]++;
                pontuacao[n] = pontuacao[n] + resp;
            }
        }while((resp<1)||(resp>3));

        if(resp==3)
        {
            do
            {
                printf("\n\tPretende usar o celular também para jogar, ouir música e entreterimento em geral?");/*(IRA?)*/
                printf("\n\t\t \"3\" para sim");
                printf("\n\t\t \"2\" para Talvez");
                printf("\n\t\t \"1\" para não");
                printf("\n\t\t Resposta: ");
                scanf("%d",&resp);
                if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
                {
                    quantidade[n]++;
                    pontuacao[n] = pontuacao[n] + resp;
                }
            }while((resp<1)||(resp>3));
        }

        if(resp==2)
        {
            do
            {
                printf("\n\t\tSomente rede social como: Facebook, Instagran, Whatsapp e etc?");
                printf("\n\tUsa somente para chamadas e rede social?");
                printf("\n\t\t \"3\" para sim");
                printf("\n\t\t \"2\" para Talvez");
                printf("\n\t\t \"1\" para não");
                printf("\n\t\t Resposta: ");
                scanf("%d",&resp);
                if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
                {
                    quantidade[n]++;
                    pontuacao[n] = pontuacao[n] + resp;
                }
            }while((resp<1)||(resp>3));
        }

        if(resp==1)
        {
            do
            {
                printf("\n\tUsa somente para chamadas?");
                printf("\n\t\t \"3\" para sim");
                printf("\n\t\t \"2\" para Talvez");
                printf("\n\t\t \"1\" para não");
                printf("\n\t\t Resposta: ");
                scanf("%d",&resp);
                if((resp<1)||(resp>3))
                    printf("\n Entrada inválida, tente novamente");
                else
                {
                    quantidade[n]++;
                    pontuacao[n] = pontuacao[n] + resp;
                }
            }while((resp<1)||(resp>3));
        }

        media[n] = (float) pontuacao[n]/quantidade[n];

        printf("\n---MARCA--------------------------------------------------");
        marca=0;
        do
        {
            printf("\n\tVocê tem alguma marca de preferência?");

            printf("\n\t\t\"7\" para Sem Preferência");
            printf("\n\t\t\"6\" para Huawei");
            printf("\n\t\t\"5\" para Xiommi");
            printf("\n\t\t\"4\" para iphone");
            printf("\n\t\t\"3\" para Lenovo");
            printf("\n\t\t\"2\" para Motorola");
            printf("\n\t\t\"1\" para Sansung");
            printf("\n\t\t Resposta: ");
            scanf("%d",&marca);
            if ((marca<1)||(marca>7))
            {
                printf("\nEntrada inválida, tente novamente!");
            }
        }while((marca<1)||(marca>7));

        printf("\n---VALOR--------------------------------------------------");
        valor=0;
        do
        {
            printf("\n\tQuantos você pretende pagar em um celular");
            printf("\n\t\t\"4\" para acima de 2000");
            printf("\n\t\t\"3\" para acima de 1500 a 2000");
            printf("\n\t\t\"2\" para acima de 1000 a 1500");
            printf("\n\t\t\"1\" para 400 a 1000");
            printf("\n\t\t Resposta: ");
            scanf("%d",&valor);
            if ((valor<1)||(valor>4))
                printf("\nEntrada inválida, tente novamente!");
        }while((valor<1)||(valor>4));

    /*AREDONDAMENTO*/
    for(loop=0; loop<6; loop++)
    {
        arredondamento(&media, loop, &i1, &i2, &i3);
    }

    /*DESIMPATAR ATRIBUTOS PRIORITARIOS*/
    if (i3>1)
         escolha = fdesimpate(&media, 3);
    else if ((i3==0) && (i2>1))
        escolha = fdesimpate(&media, 2);
    else if ((i2==0) && (i3==0))
        escolha = fdesimpate(&media, 1);

    /*CASO NÃO PRECISE DE DESIMPATE*/
    if (i3==1)
        escolha = fsemDesimpate(&media, 3);
    if ((i2==1)&&(i3==0))
        escolha = fsemDesimpate(&media, 2);


    /*EXIBIÇÃO DO RESULTADO*/
    indice = calcular_indice( valor, marca, escolha);
    fexibir_resultado(marca, valor, banco_de_dados[indice].nome, banco_de_dados[indice].preco, strlen(banco_de_dados[indice].nome));

    /*SIMULAÇÃO COM JUROS COMPOSTOS*/
    if(banco_de_dados[indice].preco !=0 )
    {
        do
    {
        printf("\nDeseja de simular quantos pagaria se fosse por mês com juros? \n");
        printf("\n\"2\" para sim");
        printf("\n\"1\" para não");
        printf("\nresposta: ");
        scanf("%d",&resp);
        if ((resp!= 1) && (resp!=2))
            printf("valor inválido\nTente novamente");
        }while((resp!= 1) && (resp!=2));
        if(resp==2)
            simulacao((float) banco_de_dados[indice].preco);
        else
        {
            printf("\nSem problemas :)\n");
        }
    }
    system("pause");
    system("cls");

    /*REINICIA O PROGRAMA*/
    do
        {
            printf("Deseja ter a sugestão de outro celular? ");
            printf("\n\"2\" para sim");
            printf("\n\"1\" para não");
            printf("\nResposta: ");
            scanf("%d",&loop);
            if((loop<1)||(loop>2))
            {
                printf("\nEntrada inválida, tente novamente!");
            }
            if(loop==2)
                system("cls");
            else
                printf("\nMuito obrigado por experimentar o Busca Phone!\n\n");
        }while ((loop<1)||(loop>2));

    }while(loop==2);/*local de saída do aplicativo principal*/

        printf("Más já que esta por aqui...\n");
        printf("Gostaria de se cadastrar e receber \n");
        printf("notificações no email quando seu celular \nideal for lançado? \n\n");
        printf("\"2\" para sim\n");
        printf("\"1\" para não");
        printf("\nResposta: ");
    do
    {
        scanf("%d",&resp);
        if((resp!=1)&&(resp!=2))
            printf("\nEntrada inválida, tente novamente\n");
    }while((resp!=1)&&(resp!=2));

        if(resp==2)/*CADASTRO DOS DADOS DO USUÁRIO/VISITANTE*/
        {
            system("cls");
            printf("\n---------------------CADASTRO--------------------\n");
            do
            {
                /*GUARDA COM NOME QUE DEVE TER OBRIGATORIAMENTE DUAS OU MAIS PALAVRAS*/
                printf("\nNome: ");
                getchar();
                fgets(dados.nome, 40, stdin);
                if (strcmp(dados.nome, "\n") == 0)
                {
                    printf("Campo vazio, tente novamente\n");
                    resp = 0;
                }
                else if (verificaNome(dados.nome, strlen(dados.nome))==0)
                    resp = 0;
                else
                    resp=1;
            }while(resp==0);

            k = strlen(dados.nome);
            dados.nome[k-1] = '\0'; /*tratamento de erro da função fgets*/
            coloca_underline(&dados.nome, strlen(dados.nome)); /*formata o nome colocando underline nos espaços*/

            printf("\nIdade: ");
            scanf("%d",&dados.idade);

            /*GUARDA O NOME QUE DEVER TER OBRIGATÓRIAMENTE @ E NÃO PODE TER ESPAÇO*/
            do
            {
                printf("\nEmail: ");
                getchar();
                fgets(dados.email, 40, stdin);
                if (strcmp(dados.email, "\n") == 0)
                {
                    printf("Campo vazio, tente novamente");
                    resp = 0;
                }
                else if (verificaEmail(dados.email, strlen(dados.email)) == 0)
                {
                    printf("Email inválido, tente novamente\n");
                    printf("Coloque @ e não deixe espaço\n");
                    resp = 0;
                }else
                    resp=1;
            }while(resp==0);

            verificaEmail(dados.email, strlen(dados.email));
            k = strlen(dados.email);
            dados.email[k-1] = '\0';

            arq = fopen("banco_de_dados//Dados_dos_usuario.txt", "a");
                fprintf(arq, "%d %d %s %s\n",indice , dados.idade, dados.nome, dados.email);
            fclose(arq);
        }
}

int carregamento()
{
    FILE *arq;
    char nome[30];
    int valor, j=0;

    arq = fopen("banco_de_dados//banco_de_dados.txt", "r");

    if(arq==NULL)
    {
        return 1;
    }
    else
    {
        while(fscanf(arq, "%s %d",&nome, &valor )!=EOF)
        {
            strcpy(banco_de_dados[j].nome, nome);
            banco_de_dados[j].preco = valor;
            /*printf("linha: %d, nome:%s, valor:%d\n",j, banco_de_dados[j].nome, banco_de_dados[j].preco);*/ /*printa o banco de dados*/
            j++;
        }
        return 0;
        fclose(arq);
    }
}

