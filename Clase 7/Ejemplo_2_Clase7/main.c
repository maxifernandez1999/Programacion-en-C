#include <stdio.h>
#define T 5
#define OCUPADO 1
#define LIBRE 0

void inicializarEstado(int estado[], int tam, int valorInicial);
int buscarLibre(int estado[], int tam, int valorInicial);
int cargarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorInicial, int valorOcupado);
int modificarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorInicial);
int eliminarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorInicial, int valorOcupado);
void mostrarAlumnos(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado);
float calcularPromedioNotas(int notaMatematica, int notaProgramacion);
void ordenarAlumnosPorNombre(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado);

int main()
{
    /*-------ALUMNO-------*/
    int legajo[T]={1010,1011,1100}; // datos hardcodeados para probar programa, importante
    int notaMatematica[T]={8,9,4};
    int notaProgramacion[T]={7,9,2};
    float promedio[T] = {7.5, 9, 3};
    char nombre[T][20] = {"Maria","Ana","Hector"};
    int estado[T] = {OCUPADO, OCUPADO, OCUPADO, LIBRE, LIBRE};
    /*--------------------*/
    int i;
    int retorno;
    int opcion;


    //inicializarEstado(estado, T, LIBRE);

    do
    {
        printf("1. Cargar un ALUMNO\n");
        printf("2. Eliminar un ALUMNO\n");
        printf("3. Modificar un ALUMNO\n");
        printf("4. Listar ALUMNOS\n");
        printf("5. Ordenar ALUMNOS por NOMBRE\n");
        printf("10. Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
               retorno = cargarAlumno(legajo, notaMatematica, notaProgramacion, promedio, nombre, estado, T, LIBRE, OCUPADO);
               switch(retorno)
               {
                    case 1:
                        printf("Alumno ingresado!!\n");
                    break;
                    case -1:
                        printf("No hay espacio!");
                    break;
               }
            break;
            case 2:
               retorno = eliminarAlumno(legajo, notaMatematica, notaProgramacion, promedio, nombre, estado, T, LIBRE, OCUPADO);
               switch(retorno)
               {
                    case 1:
                        printf("Alumno eliminado!!\n");
                    break;
                    case -1:
                        printf("No existe el alumno!\n");
                    break;
                    case 0:
                        printf("Accion cancelada!\n");
                    break;
               }
            break;
              case 3:
               retorno = modificarAlumno(legajo, notaMatematica, notaProgramacion, promedio, nombre, estado, T, OCUPADO);
               switch(retorno)
               {
                    case 1:
                        printf("Alumno modificado!!\n");
                    break;
                    case -1:
                        printf("No existe el alumno!\n");
                    break;
                    case 0:
                        printf("Accion cancelada!\n");
                    break;
               }
            break;
            case 4:
                mostrarAlumnos(legajo, notaMatematica, notaProgramacion, promedio, nombre, estado, T, OCUPADO);
            break;

            case 5:
                ordenarAlumnosPorNombre(legajo, notaMatematica, notaProgramacion, promedio, nombre, estado, T, OCUPADO);
            break;
        }

    }while(opcion!=10);


    return 0;
}


void inicializarEstado(int estado[], int tam, int valorInicial)
{
    int i;
    for(i=0; i<tam; i++)
    {
        estado[i] = valorInicial; // inicializa el estado en 0 LIBRE
    }

}

int buscarLibre(int estado[], int tam, int valorInicial)
{
    int indice = -1; // indice o posicion -1 para q empiece fuera del array
    int i;

    for(i=0; i<tam; i++)
    {
        if(estado[i] == valorInicial)// valor inicial 0 // si la posicion del array tiene valor 0
        {                                               // indica q este lugar esta libre y break;
            indice = i;
            break;
        }
    }


    return indice;
}
/*
return -1 si no pudo cargar un alumno, porque no hay lugar
        1 si pudo efectuar la carga de datos

*/
int cargarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorInicial, int valorOcupado)
{

    int indice;
    indice = buscarLibre(estado, tam, valorInicial);
    if(indice != -1) // -1 no existe el alumno
    {
        //pedir datos
        printf("Ingrese legajo: ");
        scanf("%d", &legajo[indice]);

        printf("Ingrese nota de matematica: ");
        scanf("%d", &notaMatematica[indice]);

        printf("Ingrese nota de programacion: ");
        scanf("%d", &notaProgramacion[indice]);

        promedio[indice] = calcularPromedioNotas(notaMatematica[indice],notaProgramacion[indice]);

        printf("Ingrese nombre: ");
        //__fpurge(stdin);
        fflush(stdin);
        fgets(nombre[indice], 20, stdin);
        nombre[indice][strlen(nombre)-1]  = '\0';

        estado[indice] = valorOcupado; //una vez que se cargaron los datos en una posicion, se cambia el estado a OCUPADO 1

        indice = 1; // retorna 1 si se pudo modificar el alumno
    }
  return indice;
}


void mostrarAlumnos(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado)
{
    int i;

    for(i=0; i<tam; i++) // recorre el array
    {
       if(estado[i]==valorOcupado) // muestra solo los alummnos que ocupan un lugar
       {
           printf("%4d %2d %2d %.2f %20s\n", legajo[i], notaMatematica[i], notaProgramacion[i], promedio[i], nombre[i]);
       }

    }


}

float calcularPromedioNotas(int notaMatematica, int notaProgramacion)
{

    return (float)(notaMatematica+notaProgramacion)/2;
}

/*1 si se modifico
 -1 si no encontro el legajo
  0 si lo encontro pero el usuario cancelo la operacion*/
int modificarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado)
{
    //pedir al usuario que ingrese un legajo:
    //buscar ese legajo en el array
    //si lo encuentra voy a modificar la nota de matematica informarlo
        //si el usuario cancela lo informo
    //si no lo encuentra informo

    int auxLegajo;
    int i;
    printf("Ingrese el legajo a buscar: ");
    scanf("%d", &auxLegajo);

    for(i=0; i<tam; i++)
    {
        if(estado[i]==valorOcupado && auxLegajo==legajo[i])//encontro el legajo
        {
            printf("Ingrese una nueva nota de matematica: ");
            scanf("%d", &notaMatematica[i]);

            promedio[i] = calcularPromedioNotas(notaMatematica[i], notaProgramacion[i]);

            break;
        }
    }


    return 1;

}
int eliminarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorInicial, int valorOcupado)
{
    int auxLegajo;
    int i;
    printf("Ingrese el legajo a buscar: ");
    scanf("%d", &auxLegajo);

    for(i=0; i<tam; i++)
    {
        if(estado[i]==valorOcupado && auxLegajo==legajo[i])//encontro el legajo
        {
           estado[i] = valorInicial; // lo que hace es cambiar el valor de estado de OCUPADO a libre

            break;
        }
    }


    return 1;
}

void ordenarAlumnosPorNombre(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado)
{
    int i;
    int j;

    int auxInt;
    float auxFloat;
    char auxString[50];

    for(i=0; i<tam-1; i++)
    {
        if(estado[i]!=OCUPADO)
        {
            continue;
        }
        for(j=i+1; j<tam; j++)
        {
             if(estado[j]!=OCUPADO)
            {
                continue;
            }
            if(strcmp(nombre[i], nombre[j])>0) // ordenamiento de nombres de a a z
            {
                strcpy(auxString, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], auxString);

                auxInt = legajo[i]; // hay que ordenar todos los demas parametros
                legajo[i] = legajo[j];
                legajo[j] = auxInt;

                auxInt = notaMatematica[i];
                notaMatematica[i] = notaMatematica[j];
                notaMatematica[j] = auxInt;

                auxInt = notaProgramacion[i];
                notaProgramacion[i] = notaProgramacion[j];
                notaProgramacion[j] = auxInt;

                auxFloat = promedio[i];
                promedio[i] = promedio[j];
                promedio[j] = auxFloat;

            }
        }
    }

}
