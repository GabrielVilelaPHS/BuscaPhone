#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*USAR O setlocale(LC_CTYPE, "portuguese"), para salvar com "." no arquivo*/
int carregamento()
{

    FILE *arq;
    char nome[30];
    int valor, i=1, l=0;

    if((arq = fopen("banco_de_dados.txt", "r"))==NULL)
    {
        printf("Erro ao abrir\n");
        return;
    }
 else
    {
        printf("Entrou\n");
        while(fscanf(arq, "%s %d",&nome, &valor )!=EOF)
        {
            printf("linha: %d, nome:%s, valor:%d\n",i, nome, valor);
            i++;
        }

        fclose("teste.txt");
    }
}
