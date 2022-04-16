/*
 * funciones.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Francisco
 */
#include "funciones.h"

int utn_getCaracter(char mensaje[], int *pOpcionIngresada, int minimo,int maximo, char mensajeError[], int reintentos)
{
	int retorno = -1;
	int buffer;
	if (mensaje != NULL && mensajeError != NULL && pOpcionIngresada != NULL && minimo <= maximo && reintentos >= 0)
	{
		printf("%s",mensaje);
		scanf("%d",&buffer);
		do {
			if(buffer<minimo || buffer>maximo)
			{
				printf("%s",mensajeError);
				printf("\n la cantidad de reintentos que te quedan son: %d \n", reintentos);
				scanf("%d",&buffer);
				reintentos--;
			}
			else
			{
			reintentos=0;
			*pOpcionIngresada = buffer;
			retorno = 0;
		    }
		}
		while(reintentos>0);
	}
	return retorno;
}
int utn_getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroingresado)
{
	int retorno = -1;
	float buffer;
	if(mensaje != NULL && minimo <= maximo && mensajeError != NULL && pNumeroingresado != NULL && reintentos >= 0)
	{
		printf("\n%s", mensaje);
		scanf("%f",&buffer);
		do
		{
			if (buffer > maximo || buffer < minimo)
			{
				printf("\n%s", mensajeError);
				scanf("%f", &buffer);
				reintentos--;
			}
			else
			{
				reintentos = 0;
				*pNumeroingresado = buffer;
				retorno = 0;
			}
		}
		while(reintentos>0);
	}
	return retorno;
}
int calcular(float n1,float n2,float *pDebito,float *pCredito,float *pBitcoin,float *pUnitario,float *pDiferencia,char mensaje[])
{
	int retorno=0;

	if(pDebito!=NULL && pCredito!=NULL && pBitcoin!=NULL && pUnitario && pDiferencia!=NULL && mensaje!=NULL)
	{
		*pBitcoin = Division(n1,4606954.55);
		*pUnitario = Division(n1,n2);
		*pDebito = n1-(n1*10/100);
		*pCredito = n1+(n1*25/100);
		if(n1>n2)
		{
			*pDiferencia = n1-n2;
		}
		else
		{
			*pDiferencia = n2-n1;
		}
		*pDiferencia = n1-n2;
		printf("\n%s",mensaje);


	}
	else{
		retorno=-1;
	}
	return retorno;
}
int mostrar(char mensaje[],float *pDebito,float *pCredito,float *pBitcoin,float *pUnitario)
{
	int retorno =0;
	if(pDebito!=NULL && pCredito!=NULL && pBitcoin!=NULL && pUnitario && mensaje!=NULL)
	{
		printf("\n%s",mensaje);
		printf("\n a)Precio con tarjeta de debito: $ %.2f",*pDebito);
		printf("\n b)Precio con tarjeta de credito $ %.2f",*pCredito);
		printf("\n c)Precio pagando con bitCoin: BTC %f",*pBitcoin);
		printf("\n d)Precio unitario: $ %.2f",*pUnitario);


	}
	else
	{
		retorno=-1;
	}
	return retorno;
}
int mostrarDif(float *pDiferencia)
{
	printf("\n La diferencia entre los dos pasajes es de: $ %.2f \n",*pDiferencia);
    return 0;
}



