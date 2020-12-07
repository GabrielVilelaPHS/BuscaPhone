#ifndef ARREONDAMENTO_H_INCLUDED
#define ARREONDAMENTO_H_INCLUDED

float arredondamento(float *media, int i, int *i1, int *i2, int *i3)
{
    if(media[i]>=2.5)
    {
        media[i]=3;
        *i3 = *i3 + 1;
    }
    else if(media[i]>=1.5)
    {
        media[i]=2;
        *i2 = *i2 + 1;
    }
    else
    {
        media[i]=1;
        *i1 = *i1 + 1;
    }
}




#endif // ARREONDAMENTO_H_INCLUDED
