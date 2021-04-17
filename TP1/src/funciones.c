#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>


float sumar(float a,float b)
{

	float sumacion;
	sumacion = a + b;
	return sumacion;
}
float restar(float a, float b)
{
	float restacion;
	restacion = a - b;
	return restacion;
}
float dividir(float a, float b)
{
	float division;
	division = a / b;
	return division;

}


float multiplicar(float a, float b)
{
	float multiplacion;
	multiplacion= a*b;
	return multiplacion;
}


float factorial(float a)
{

	float fac;
	if( a == 1 || a == 0 )
	{
		fac = 1;
	}
	else
		{
			fac = a * factorial(a - 1);
		}
	return fac;
}

float numero1(void)
{
	float pedirNumero;
	printf("Ingresar el operando 1");
	scanf("%f", &pedirNumero);
	return pedirNumero;
}

float numero2(void)
{
	float pedirNumero2;
	printf("Ingresar el operando 2");
	scanf("%f", &pedirNumero2);
	return pedirNumero2;
}


int menu(float a,float b)
{
	int opciones;
	//funcion1 = numero1();
	//funcion2 = numero2();
	printf( "1. Ingresar 1er operando (A=%.2f)\n",a);
	printf("\n2. Ingresar 2do operando (B=%.2f)\n",b);
	printf("\n3. Calcular todas las operaciones\n");
	printf("\na) Calcular la suma (A+B)\n");
	printf("\nb) Calcular la resta (A-B)\n");
	printf("\nc) Calcular la division (A/B)\n");
	printf("\nd) Calcular la multiplicacion (A*B)\n");
	printf("\ne) Calcular el factorial (A!)\n");
	printf("\n4. Informar resultados\n");
	printf("\n5. Salir\n");
	printf("\n ¿Que operacion desea realizar?");
	scanf("%d", &opciones);
	return opciones;
}
