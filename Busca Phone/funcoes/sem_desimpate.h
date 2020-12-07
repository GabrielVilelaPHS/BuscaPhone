#ifndef SEM_DESIMPATE_H_INCLUDED
#define SEM_DESIMPATE_H_INCLUDED

int fsemDesimpate(float *media, int k)
{
    int contador, escolha=0;
    printf("\nEntrou sem desimpate\n");
    printf("\nvalor k: %d\n",k);
    for(contador=0; contador<6; contador++)
    {
        if (media[contador]==k)
        {
            escolha=contador;
            /*printf("\n Valor do contador %d",contador);/*
        }
    /*printf("\nContador: %d",contador);*/
    /*printf("\VetorPont: %d",VetorPont[contador]);*/
        }
    }
    return escolha;
}



#endif // SEM_DESIMPATE_H_INCLUDED
