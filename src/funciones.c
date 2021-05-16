#include<stdio.h>
#include <stdlib.h>
#include "funciones.h"
int IdNuevo;

int DarId()
{
    return IdNuevo+=1;
}
void BajaEmpleado(eEmpleado lista[], int tam)

    {
    	int id;
    	int i;
    	int confirmar;

    	ListadoEmpleado(lista,tam);
    	printf("Ingrese el id del empleado a dar de BAJA\n");
    	scanf("%d",&id);

    	for (i=0;i<tam;i++)
    	{
    		if(id==lista[i].id && lista[i].isEmpty==OCUPADO)
    		{
    			MostrarEmpleado(lista[i]);
    			printf("Esta seguro que quiere dar de baja al empleado\n?");
    			printf("1. SI\n2.NO\n");
    			scanf("%d",&confirmar);
    			if (confirmar >2 && confirmar < 1)
    			{
    				printf("ERROR, elegir una opcion valida\n");
    				scanf("%d",&confirmar);
    			}

    			if(confirmar ==1)
    			{
    				lista[i].isEmpty=VACIO;
    			}
    			else
    			{
    				break;
    			}

    		}
    	}
    }




void ModificarEmpleado(eEmpleado lista[], int tam)
{
        	int id;
        	int opcion=0;
        	int ingresar;
        		int i;

        		ListadoEmpleado(lista,tam);

        		printf("Ingrese el ID: ");
        		fflush(stdin);
        		scanf("%d",&id);

        		for (i=0;i<tam;i++)
        		{
        			if(id==lista[i].id && lista[i].isEmpty==OCUPADO)
        			{


        			do
        			{

        				printf("Que desea modificar?\n");
        				    printf("1. Nombre\n");
        				    printf("2. Apellido\n");
        				    printf("3. Salario\n");
        				    printf("4. Sector\n");
        				    printf("5. SALIR\n");
        				scanf("%d",&ingresar);

        					switch (ingresar)
        					{
        					case 1:
        						printf("Ingrese nombre: ");
        						fflush(stdin);
        						scanf("%[^\n]",lista[i].nombre);
        						break;
        					case 2:
        						printf("Ingrese apellido: ");
        						fflush(stdin);
        						scanf("%[^\n]",lista[i].apellido);
        						break;
        					case 3:
        						printf("Ingrese salario: ");
        						fflush(stdin);
        						scanf("%f",&lista[i].salario);
        						break;
        					case 4:
        						printf("Ingrese sector: ");
        						fflush(stdin);
        						scanf("%d",&lista[i].sector);
        						break;
        					case 5:
        						printf("¿Esta seguro que quiere salir? Ingresar 9 para salir ");
        						fflush(stdin);
        						scanf("%d", &opcion);
        						break;
        					}
        					}while(opcion!=9);
        			}

        		}



}


void MostrarEmpleado(eEmpleado lista)
{
     printf("%d %s %s %f %d\n", lista.id,
    		 	 	 	 	 	 	 	 lista.nombre,
										 lista.apellido,
										 lista.salario,
										 lista.sector

                                   );
}



void ListadoEmpleado(eEmpleado lista[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].isEmpty == OCUPADO)
        {
            MostrarEmpleado(lista[i]);
        }

    }
}
int menu()
{
    int option;

    printf("1. ALTA EMPLEADO\n");
    printf("2. MODIFICACION EMPLEADO\n");
    printf("3. BAJA EMPLEADO\n");
    printf("4. INFORMAR\n");
    printf("5. Exit\n");
    fflush(stdin);
    scanf("%d", &option);


    return option;
}
void inicializarEmpleado(eEmpleado list[],int tam)
{
    int i;

    for(i=0; i<TAM;i++)
    {
        list[i].isEmpty=VACIO;
    }
}

int BuscarLibre(eEmpleado list[], int tam)
{
    int aux;
    int i;
    aux=-1;

    for(i=0; i<TAM;i++)
    {
        if(list[i].isEmpty==VACIO)
        {
            aux=i;
            break;
        }
    }
    return aux;
}

int Carga (eEmpleado list[], int tam)
{
    int i=-1;
    i=BuscarLibre(list,tam);
    if(i!=-1)
    {
        list[i]=PedirDatosEmpleado(list,tam);
    }
    return i;
}

eEmpleado PedirDatosEmpleado()
{
	eEmpleado miEmpleado;

    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%[^\n]", miEmpleado.nombre);
    printf("Ingrese apellido: ");
    fflush(stdin);
    scanf("%[^\n]", miEmpleado.apellido);
    printf("Ingrese salario: ");
    scanf("%f", &miEmpleado.salario);
    printf("Ingrese sector: ");
    scanf("%d", &miEmpleado.sector);
    miEmpleado.isEmpty = OCUPADO;
    miEmpleado.id = DarId();
    return miEmpleado;
}
