#include "banco_de_dados.h"

void fexibir_resultado(int marca, int valor, char nome[25], int preco, int k)
{
    int i;
    for(i=0; k>i; i++)
    {
        if (nome[i]=='_')
            nome[i]=' ';
    }

    printf("\n\t\t**************************************************************");
    if (marca==1)/*sansung*/
    {
        printf("\n\t\tSeu modelo ideal é o %s da Sansung",nome);
        printf("\n\t\tValor referênte ao 2º semestre de 2018: R$%d,00 reis",preco);
    }
    else if (marca==2)/*motorola*/
    {
        printf("\n\t\tSeu modelo ideal é o %s da Motorola",nome);
        printf("\n\t\tValor referênte ao 2º semestre de 2018: R$%d,00 reais",preco);
    }
    else if (marca==3)/*lenovo*/
    {
        if (valor==1)
        {
            printf("\n\t\tSeu modelo ideal é o %s ",nome);
            printf("\n\t\tValor referênte ao 2º semestre de 2018: R$%d,00 reais",preco);
        }
        else
        {
            printf("\n\t\tModelo não Disponível!");
            printf("\n\t\tCelulares da lenovo foram englobados com a Motorola,");
            printf("\n\t\tdevido a isso não se tem o lançamento de celulares");
            printf("\n\t\tnovos");
        }
    }
    else if (marca==4)/*iphone*/
    {
        if ((valor==1)&&(valor==2))
        {
            printf("\n\t\tNão Diponível");
            printf("\n\t\tOBS: Iphones diponíveis acima de 2000 reais");
        }
        else
        {
            printf("\n\t\tSeu modelo ideal é o %s da Apple",nome);
            printf("\n\t\tValor referênte ao 2º semestre de 2018: R$%d,00 reais",preco);
        }
    }
    else if (marca==5)/*xiomi*/
    {
        printf("\n\t\tSeu modelo ideal é o %s da Xiomi",nome);
        printf("\n\t\tValor referênte ao 2º semestre de 2018: R$%d,00 reais",preco);
    }
    else if (marca==6)/*huawei*/
    {
        printf("\n\t\tSeu modelo ideal é o %s da Huawei",nome);
        printf("\n\t\tValor referênte ao 2º semestre de 2018: R$%d,00 reais",preco);
    }
    else if (marca==7)/*sem preferência*/
    {
        printf("\n\t\tSeu modelo ideal é o %s ",nome);
        printf("\n\t\tValor referênte ao 2º semestre de 2018: R$%d,00 reais",preco);
    }else /*erro*/
    {
        printf("\nMarca com problema");
    }
    printf("\n\t\tMargem de erro no valor de: R$50,00 reais");
    printf("\n\t\t***************************************************************\n");
    return;
}


