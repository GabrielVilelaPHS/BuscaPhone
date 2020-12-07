#ifndef RESULTADO_H_INCLUDED
#define RESULTADO_H_INCLUDED

#include "banco_de_dados.h"

fexibir_resultado(int valor, int marca, int escolha)
{
    int indice;



/* printf("\nDesimpate: %d \n",desimpate);*/
        printf("\n\t\t**************************************************************");
        if (marca==7)/*sansung*/
        {
            if (valor==1)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Sansung",SAmenor1000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reis",SAmenorpreco1[escolha]);
            }
            if (valor==2)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Sansung",SA1000a1500[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",SAmenorpreco2[escolha]);
            }
            if (valor==3)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Sansung",SA1500a2000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",SAmenorpreco3[escolha]);
            }
            if (valor==4)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Sansung",SAmaior2000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",SAmenorpreco4[escolha]);
            }

        }
        else if (marca==6)/*motorola*/
        {
           if (valor==1)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Motorola",MOmenor1000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",MOmenorpreco1[escolha]);
            }
            if (valor==2)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Motorola",MO1000a1500[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",MOmenorpreco2[escolha]);
            }
            if (valor==3)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Motorola",MO1500a2000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",MOmenorpreco3[escolha]);
            }
            if (valor==4)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Motorola",MOmaior2000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",MOmenorpreco4[escolha]);
            }
        }
        else if (marca==5)/*lenovo*/
        {
            if (valor==1)
            {
                printf("\n\t\tSeu modelo ideal é o %s ",LEmenor1000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",LEmenorpreco1[escolha]);
            }
            if (valor==2)
            {
                printf("\n\t\tModelo não Disponível!");
                printf("\n\t\tCelulares da lenovo foram englobados com a Motorola,");
                printf("\n\t\tdevido a isso não se tem o lançamento de celulares");
                printf("\n\t\tnovos");
            }
            if (valor==3)
            {
                printf("\n\t\tModelo não Disponível!");
                printf("\n\t\tCelulares da lenovo foram englobados com a Motorola,");
                printf("\n\t\tdevido a isso não se tem o lançamento de celulares");
                printf("\n\t\tnovos");
            }
            if (valor==4)
            {
                printf("\n\t\tModelo não Disponível!");
                printf("\n\t\tCelulares da lenovo foram englobados com a Motorola,");
                printf("\n\t\tdevido a isso não se tem o lançamento de celulares");
                printf("\n\t\tnovos");
            }
        }
        else if (marca==4)/*iphone*/
        {
            if (valor==1)
            {
                printf("\n\t\tNão Diponível");
                printf("\n\t\tOBS: Iphones diponíveis acima de 2000 reais");
            }
            if (valor==2)
            {
                printf("\n\t\tNão Diponível");
                printf("\n\t\tOBS: Iphones diponíveis acima de 2000 reais");
            }
            if (valor==3)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Apple",IP1500a2000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",IPmenorpreco3[escolha]);
            }
            if (valor==4)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Apple",IPmaior2000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",IPmenorpreco4[escolha]);
            }
        }
        else if (marca==3)/*xiomi*/
        {
            if (valor==1)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Xiomi",XImenor1000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",XImenorpreco1[escolha]);
            }
            if (valor==2)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Xiomi",XI1000a1500[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",XImenorpreco2[escolha]);
            }
            if (valor==3)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Xiomi",XI1500a2000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",XImenorpreco3[escolha]);
            }
            if (valor==4)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Xiomi",XImaior2000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",IPmenorpreco4[escolha]);
            }
        }
        else if (marca==2)/*huawei*/
        {
            if (valor==1)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Huawei",HUmenor1000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",HUmenorpreco1[escolha]);
            }
            if (valor==2)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Huawei",HU1000a1500[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",HUmenorpreco2[escolha]);
            }
            if (valor==3)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Huawei",HU1500a2000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",HUmenorpreco3[escolha]);
            }
            if (valor==4)
            {
                printf("\n\t\tSeu modelo ideal é o %s da Huawei", HUmaior2000[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",HUmenorpreco4[escolha]);
            }
        }
        else if (marca==1)/*sem preferência*/
        {
            if (valor==1)
            {
                printf("\n\t\tSeu modelo ideal é o %s ",melhor1[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",precomelhor1[escolha]);
            }
            if (valor==2)
            {
                printf("\n\t\tSeu modelo ideal é o %s ",melhor2[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",precomelhor2[escolha]);
            }
            if (valor==3)
            {
                printf("\n\t\tSeu modelo ideal é o %s ",melhor3[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",MOmenorpreco3[escolha]);
            }
            if (valor==4)
            {
                printf("\n\t\tSeu modelo ideal é o %s ",melhor4[escolha]);
                printf("\n\t\tValor referênte ao 1º semestre de 2018: R$%d,00 reais",precomelhor4[escolha]);
                printf("\n\t\tMargem de erro no valor de: R$50,00 reais\n\n");
            }
        }else /*erro*/
        {
            printf("\nMarca com problema");
        }
        printf("\n\t\tMargem de erro no valor de: R$50,00 reais");
        printf("\n\t\t***************************************************************\n");
}




#endif // RESULTADO_H_INCLUDED
