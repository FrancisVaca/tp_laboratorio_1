/*
 ============================================================================
 Name        : TP1.c
 Author      : francisco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);

	int menu;
	int opcion;
	int kilometrosIngresados;
	int precioIngresadoA;
	int precioIngresadoL;
	float debitoA;
	float creditoA;
	float bitcoinA;
	float unitarioA;
	float debitoL;
	float creditoL;
	float bitcoinL;
	float unitarioL;
	float precioAerolineas;
	float precioLatam;
	float kilometros;
	float diferencia;



	do
	{
		menu = utn_getCaracter("\n 1. Ingresar Kilometros:  \n 2. Ingresar Precio de Vuelos: \n 3. Calcular todos los costos: \n 4. Informar Resultados \n 5. Carga forzada de datos \n 6. Salir \n",&opcion,1,6,"\n Opcion no valida, Intente nuevamente \n.",3);
		printf("-------------------------------------------------------\n");
		if (menu == 0)
		{
			switch (opcion)
			{
			case 1:
				kilometrosIngresados = utn_getFloat("\n Ingresar Kilómetros: ", 3, 1, 100000,"\n Cantidad de kilometros no valida.Intente nuevamente \n",&kilometros);
				printf("-------------------------------------------------------\n");
				break;
			case 2:
				precioIngresadoA = utn_getFloat("\n A- Precio vuelo Aerolíneas: ", 3, 1, 1000000,"\n Precio no valido.Intente nuevamente", &precioAerolineas);
				precioIngresadoL = utn_getFloat("\n A- Precio vuelo Latam: ", 3, 1, 1000000,"\n Precio no valido.Intente nuevamente", &precioLatam);
				printf("-------------------------------------------------------\n");
				break;
			case 3:
				if(precioIngresadoA ==-1 && precioIngresadoL ==-1 && kilometrosIngresados ==-1 )
				{
				calcular(precioAerolineas,kilometros,&debitoA,&creditoA,&bitcoinA,&unitarioA,&diferencia,"\n Calculos realizados exitosamente.\n");
				calcular(precioLatam,kilometros,&debitoL,&creditoL,&bitcoinL,&unitarioL,&diferencia,"\n Calculos realizados exitosamente.\n");
				}
				else
				{
					printf("Error, no ingreso los datos previamente");
				}
				break;
			case 4:
				mostrar("\nAerolineas: \n",&debitoA,&creditoA,&bitcoinA,&unitarioA);
				mostrar("\n Latam: \n",&debitoL,&creditoL,&bitcoinL,&unitarioL);
				mostrarDif(&diferencia);
				printf("-------------------------------------------------------\n");
				break;
			case 5:
				kilometros =  7090;
				precioAerolineas = 162965;
				precioLatam = 159339;
				calcular(precioAerolineas,kilometros,&debitoA,&creditoA,&bitcoinA,&unitarioA,&diferencia,"\n Calculos realizados exitosamente.\n");
                calcular(precioLatam,kilometros,&debitoL,&creditoL,&bitcoinL,&unitarioL,&diferencia,"\n Calculos realizados exitosamente.\n");
                mostrar("\nAerolineas: \n",&debitoA,&creditoA,&bitcoinA,&unitarioA);
                mostrar("\n Latam: \n",&debitoL,&creditoL,&bitcoinL,&unitarioL);
                mostrarDif(&diferencia);
				break;
			}
		}
	}while(opcion != 6);

	return EXIT_SUCCESS;
}
