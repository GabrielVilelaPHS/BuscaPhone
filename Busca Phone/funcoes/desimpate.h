#ifndef DESIMPATE_H_INCLUDED
#define DESIMPATE_H_INCLUDED

int fdesimpate(float *media, int k)
{
    int escolha=0, desimpate[6]={0}, contador, existe;
                printf("\nDe um celular como todo, qual é a caracteristica que você mais considera importante: ");
                if (media[0]==k)
                {
                        printf("\n \"1\" para: Tirar boa selfies(fotos de se mesmo(a))");
                        desimpate[0]=1;
                }
                if (media[1]==k)
                {
                        printf("\n \"2\" para: Uma ótima resolução de vídeos e imagens");
                        desimpate[1]=2;
                }
                if (media[2]==k)
                {
                        printf("\n \"3\" para: Uma ótima qualidade nos vídeos e fotos feitos com a câmera traseira");
                        desimpate[2]=3;
                }
                if (media[3]==k)
                {
                        printf("\n \"4\" para: Ter espaço para armazenar muitas fotos, vídeos e aplicativos ");
                        desimpate[3]=4;
                }
                if (media[4]==k)
                {
                        printf("\n \"5\" para: Gostaria de ter um bom desempenho em jogos e mexer com várias coisas ao mesmo tempo ");
                        desimpate[4]=5;
                }
                if (media[5]==k)
                {
                        printf("\n \"6\" para: Mexer no celular o dia inteiro sem precisar se preocupar em carregar");
                        desimpate[5]=6;
                }
                printf("\n");
                printf("\nResposta: ");
                do
                {
                    scanf("%d",&escolha);
                    existe=0;
                     for (contador=0; contador<6; contador++)
                    {
                        if ((escolha==desimpate[contador])&&(escolha>0))
                        {
                            existe = 1;
                        }
                    }
                    if (existe==0)
                    {
                        printf("\nEntrada invália, tente novamente\n");
                    }
                }while(existe==0);

        escolha = escolha -1; /*tenho que subtrair 1 do que o usuário digitou*/
    return escolha;
}

#endif // DESIMPATE_H_INCLUDED
