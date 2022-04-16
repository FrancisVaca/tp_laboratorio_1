/*
 * funciones.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Francisco
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
/// @fn int utn_getCaracter(char[], int*, int, int, char[], int)
/// @brief
/// Esta funcion la utilice para realizar el menu, y verificar que el usuario seleccione una opcion valida, utilizando un minimo y
/// maximo, y dandole 3 reintentos en caso de equivocarse. Para esto utilice los parametros indicados para poder verificar que los datos y el mensaje sean validos.
///
/// @pre
/// @post
/// @param mensaje
/// @param pOpcionIngresada
/// @param minimo
/// @param maximo
/// @param mensajeError
/// @param reintentos
/// @return
int utn_getCaracter(char mensaje[], int *pOpcionIngresada, int minimo,int maximo, char mensajeError[], int reintentos);
/// @fn int utn_getFloat(char[], int, int, int, char[], float*)
/// @brief
/// La funcion getFloat, la utilice para para pedir los kilometros, y precios de distintas aerolineas, tambien validando maximo y
/// minimo,utilizando nuevamente reintentos, verificando que los datos ingresados, y el mensaje utilizado no sean NULL.
/// @pre
/// @post
/// @param mensaje
/// @param reintentos
/// @param minimo
/// @param maximo
/// @param mensajeError
/// @param pNumeroingresado
/// @return
int utn_getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroingresado);
/// @fn int calcular(float, float, float*, float*, float*, float*, float*, char[])
/// @brief
/// Esta funcion la utilizo, para calcular los distintos tipos de medios de pago que tendra el usuario, utilizando loas punteros
/// para poder retornar los valores de las formas de pago, al main, nose si quedo bien o si mi interpretacion de punteros es
/// correcta pero funciono estoy abierto a criticas cualquier error.
/// Las operaciones matematicas las llamo desde esta funcion, ya que se encuentran en otra biblioteca ("Operaciones.h)que fue la
/// que utilice para la calculadora.
/// @pre
/// @post
/// @param n1
/// @param n2
/// @param pDebito
/// @param pCredito
/// @param pBitcoin
/// @param pUnitario
/// @param pDiferencia
/// @param mensaje
/// @return
int calcular(float n1,float n2,float *pDebito,float *pCredito,float *pBitcoin,float *pUnitario,float*pDiferencia,char mensaje[]);
/// @fn int mostrar(char[], float*, float*, float*, float*)
/// @brief
/// La funcion mostrar consiste en eso basicamente, muestra los resultados si asi lo desea el usuario, utilizando nuevamente punteros,
/// y colocando los prinf en la misma.
/// @pre
/// @post
/// @param mensaje
/// @param pDebito
/// @param pCredito
/// @param pBitcoin
/// @param pUnitario
/// @return
int mostrar(char mensaje[],float *pDebito,float *pCredito,float *pBitcoin,float *pUnitario);
/// @fn int mostrarDif(float*)
/// @brief
/// Esto quizas fue una mala idea, pero para que no me muestre la diferencia 2 veces cuando reutilizaba la funcion de calcular en ambas aerolineas
/// lo puse aparte lo de mostrar la diferencia entre precios de aerolineas.
/// @pre
/// @post
/// @param pDiferencia
/// @return
int mostrarDif(float *pDiferencia);


#endif /* FUNCIONES_H_ */
