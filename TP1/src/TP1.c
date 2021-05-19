/*
 * ====================================================
 * 1. Ingresar 1er operando (A=x)
 * 2. Ingresar 2do operando (B=y)
 * 3. Calcular todas las operaciones
 *    a) Calcular la suma (A+B)
 *    b) Calcular la resta (A-B)
 *    c) Calcular la division (A/B)
 *    d) Calcular la multiplicacion (AB)
 *    e) Calcular el factorial (A!)
 * 4. Informar resultados
 *    a) �El resultado de A+B es: r�
 *    b) �El resultado de A-B es: r�
 *    c) �El resultado de A/B es: r� o �No es posible dividir por cero�
 *    d) �El resultado de AB es: r�
 *    e) �El factorial de A es: r1 y El factorial de B es: r2�
 *
 * Leiva Patricio 1�B
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"



int main(void)
{

float operando1;
float operando2;
int opciones;
int banderaDelPrimero;
int banderaDelSegundo;
int banderaDelTercero;
int seguir;
float suma;
float resta;
float division;
float multiplicacion;
unsigned long int factorial1;
unsigned long int factorial2;
int banderaDivision;
int banderaFactorial2;
int banderaFactorial1;

setbuf(stdout, NULL);
banderaDelPrimero=0;
banderaDelSegundo=0;
operando1=0;
operando2=0;
seguir=1;
banderaDelTercero=0;
banderaDivision=0;
banderaFactorial2=0;
banderaFactorial1=0;


do
{
	opciones = menu(operando1,operando2);


	switch(opciones)
	{
	case 1:
		operando1 = numero1();
		banderaDelPrimero = 1;
		break;
	case 2:
		if(banderaDelPrimero == 1)
		{
			operando2 = numero2();
			banderaDelSegundo = 1;
		}
		else
		{
			printf("ERROR! Ingrese el primer numero antes\n");

		}
		break;
	case 3:
		if(banderaDelSegundo == 1)
		{
			suma = sumar(operando1, operando2);
			resta = restar(operando1, operando2);
			if(operando2==0)
			{
				printf("No se puede realizar la division por 0\n");
				banderaDivision=0;
			}
			else
			{
				division = dividir(operando1, operando2);
				banderaDivision=1;
			}

			multiplicacion = multiplicar(operando1, operando2);
			if(operando1<0)
			{
				printf("no se puede realizar el factorial de un numero negativo\n");
				banderaFactorial1=0;
			}
			else
			{
				factorial1=factorial(operando1);
				banderaFactorial1=1;
			}
			if(operando2<0)
			{
				printf("no se puede realizar el factorial de un numero negativo\n");
				banderaFactorial2=0;
			}
			else
			{
				factorial2=factorial(operando2);
				banderaFactorial2=1;
			}

			banderaDelTercero=1;
		}
		else
		{
			printf("No se ingresaron numeros\n");
		}
		break;
	case 4:
		if(banderaDelTercero==1)
		{

			printf("La suma de %.2f + %.2f es: %.2f\n", operando1, operando2, suma);
			printf("La resta de %.2f - %.2f es: %.2f\n", operando1, operando2, resta);
			if(banderaDivision==1)
			{
			printf("La division de %.2f / %.2f es: %.2f\n", operando1, operando2, division);
			}
			else
			{
				printf("La division no se pudo realizar porque no se puede dividir entre 0\n");
			}
			printf("La multiplicaion de %.2f * %.2f es: %.2f\n", operando1, operando2, multiplicacion);
			if(banderaFactorial1==1)
			{
				printf("El factorial de %d es: %ld\n", (int)operando1,factorial1);
			}
			else
			{
				printf("No se pudo realizar el factorial\n");
			}
			if(banderaFactorial2==1)
			{
				printf("El factorial de %d es: %ld\n", (int)operando2,factorial2);
			}
			else
			{
				printf("No se pudo realizar el factorial\n");
			}
		}
		else
		{
			printf("Primero realice los calculos!\n");
		}
		break;
	case 5:
		printf("Gracias por usar mi calculadora");
		seguir=0;

		break;
	}

}
	while(seguir==1);
	return 0;
}
