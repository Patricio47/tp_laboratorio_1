

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#define OCUPADO 1
#define VACIO 0
#define TAM 1000

typedef struct
{
	int id;
	char nombre[51];
	char apellido[51];
	float salario;
	int sector;
	int isEmpty;
}eEmpleado;

void BajaEmpleado(eEmpleado lista[], int tam);
void ModificarEmpleado(eEmpleado lista[], int tam);
void MostrarEmpleado(eEmpleado lista);
void ListadoEmpleado(eEmpleado lista[], int tam);
int menu();
void inicializarEmpleado(eEmpleado list[],int tam);
int BuscarLibre(eEmpleado list[], int tam);
int Carga (eEmpleado list[], int tam);
eEmpleado PedirDatosEmpleado();
int DarId();
#endif /* FUNCIONES_H_ */
