
float juroscompostos(float,float,int);

float simulacao(float c){
	float j,valor;
	int t, resp;
	  /*printf("Digite o valor presente:");
	  scanf("%f",&c);*/
    do
    {
        system("cls");
        do
        {
        printf("Em quantos meses voc� deseja pagar \nOBS:quantidade m�nima 2 e maxima 10: ");
        printf("\nResposta: ");
        scanf("%d",&t);
        if((t<2)||(t>10))
            printf("\npor favor, digite outro n�mero dentro do intervalo\n\n");
        }while((t<2)||(t>10));

        do
        {
            printf("\nQual seria taxa/porcentagem de juros ao m�s: ");
            printf("\nResposta: ");
            scanf("%f",&j);
            if(j<=0)
                printf("\ndigite um valor maior que 0\n");
        }while(j<=0);

        valor = juroscompostos(c,j,t);

        printf("\nDados:   juro: %.2f%,   quantidade de m�ses: %d ",j,t);
        printf("\n-Valor sem juros composto: %.2f",c);
        printf("\n-Valor pago com juro composto: %.2f",valor);
        printf("\n-Pagando cerca de %.2f por m�s aproximadamente\n\n",valor/t);
        system("pause");
        do
        {
            printf("\nDeseja fazer mais uma simula��o? \n");
            printf("\"2\" para sim\n");
            printf("\"1\" para n�o\n");
            scanf("%d",&resp);
            if((resp<1)||(resp>2))
                 printf("\nEntrada inv�lida\nTente novamente...\n");
        }while((resp<1)||(resp>2));
    }while(resp==2);
    system("cls");
    return;
}



float juroscompostos(float valor, float taxa, int meses){

    double Total;
   if (meses==0)
   {
       return valor;
   }
    else
    {
        valor = valor  + (valor * (taxa / 100));
        meses --;
        Total = juroscompostos(valor,taxa,meses);
 	 return Total;
    }

}
