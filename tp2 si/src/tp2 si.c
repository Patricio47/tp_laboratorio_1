/*
 ============================================================================
 Name        : tp2.c
 Author      : leiva Patricio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"
int main(void)
{
	setbuf(stdout, NULL);

	eEmpleado miEmpleado[TAM];
	inicializarEmpleado(miEmpleado,TAM);
	int retorno;
	char confirmar='n';
	do{
		switch (menu())
	    {
	    case 1:
	            retorno=Carga(miEmpleado,TAM);
	                    if(retorno!=-1)
	                    {
	                        printf("El empleado se ingreso con exito \n");
	                    }
	                    else
	                    {
	                        printf("El empleado no se pudo ingresar, no hay lugar \n");
	                    }
	                break;
	                case 3:
	                    BajaEmpleado(miEmpleado, TAM);
	                break;
	                case 2:
	                    ModificarEmpleado(miEmpleado, TAM);
	                break;
	                case 4:
	                    ListadoEmpleado(miEmpleado, TAM);
	                break;
	                case 5:
	                    printf("Para salir ingrese s");
	                    fflush(stdin);
	                    scanf("%c", &confirmar);
	                break;
	   }
	}while(confirmar!='s');

	return EXIT_SUCCESS;
}
