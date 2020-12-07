

int verificaEmail(char email[30], int k)
{
    int i, existeA=0, existeE=0, existeCom;
    for(i=0; i<k; i++)
    {
        if(email[i]=='@')
            existeA++;
        if(email[i]==' ')
            existeE++;
    }
    if ((existeA!=0)&&(existeE==0))
        return 1;
    else
        return 0;

   /* if((strcasecmp(dados.email[k-1], ".") && (strcasecmp(dados.email[k-1], "c") &&(strcasecmp(dados.email[k-1], "o") &&(strcasecmp(dados.email[k-1], "m")))
                                              existeCom++;*/
}

int verificaNome(char nome[30], int k)
{
    int i, existeE=0;

    for(i=0; i<k; i++)
    {
        if(nome[i]==' ')
            existeE++;
    }

    if (existeE==0)
    {
        printf("Entrada inválida, digite nome e sobrenome\n");
        return 0;
    }
    else
        return 1;
}

char coloca_underline(char *nome, int k)
{
    int i = 0;

    for (i=0; i<k; i++)
    {
        if(nome[i]==' ')
           nome[i]= '_';
    }
}
