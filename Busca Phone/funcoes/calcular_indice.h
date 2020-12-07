#ifndef CALCULAR_INDICE_H_INCLUDED
#define CALCULAR_INDICE_H_INCLUDED


int calcular_indice(int valor, int marca, int escolha) /*tanto o valor como a marca começa de 1*/
{
    int calculo;

    if(valor==1)
    {
        calculo = (marca-1)*6 + escolha;
    }
    if(valor==2)
    {
        calculo = ((marca-1)+(1*7))*6 + escolha;
    }
    if(valor==3)
    {
        calculo = ((marca-1)+(2*7))*6 + escolha;
    }
    if(valor==4)
    {
        calculo = ((marca-1)+(3*7))*6 + escolha;
    }

    return calculo;
}


#endif // CALCULAR_INDICE_H_INCLUDED
