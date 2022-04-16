/*
 * Operaciones.c
 *
 *  Created on: 3 abr. 2022
 *      Author: Francisco
 */
#include "Operaciones.h"

float Suma(float num1,float num2){
	float rt;
	rt = num1+num2;
	return rt;
}
float Resta(float num1,float num2){
	float rt;
	rt = num1-num2;
	return rt;
}
float Multiplicacion(float num1,float num2){
	float rt;
	rt = num1*num2;
	return rt;
}
float Division(float num1,float num2){
	float rt;
	if(num1==0 || num2==0){
		rt = 0;
	}
	else{
		rt = num1/num2;
	}
	return rt;
}


