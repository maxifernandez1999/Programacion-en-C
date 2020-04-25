#include <stdio.h>
#define T 5
#define OCUPADO 1
#define LIBRE 0
// ALTAS , BAJAS, MODIFICACION (INICIAL) CON VECTORES.
void inicializarEstado(int estado[], int tam, int valorInicial);
int buscarLibre(int estado[], int tam, int valorInicial);
int cargarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorInicial, int valorOcupado);
int ModificarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado);
void mostrarAlumnos(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado);
float promedioProgramacion(int notaMatematica, int notaProgramacion);
int menuOpciones(int mensaje[]);
int EliminarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado, int valorInicial);

int main()
{

    int legajo[T];
    int notaMatematica[T];
    int notaProgramacion[T];
    float promedio[T];
    char nombre[T][20];
    int estado[T];


    int retorno;
    int i;
    int opcion;

    inicializarEstado(estado, T, LIBRE); // vector estado inicializado en 0
    //for(i=0; i<3; i++) // para probar
    do{
        opcion = menuOpciones("1. cargar numeros\n2.mostrar numeros\n3.Midificar\n4.Eliminar");
        switch(opcion)
        {
            case 1:
                retorno = cargarAlumno(legajo, notaMatematica, notaProgramacion, promedio, nombre, estado, T, LIBRE, OCUPADO);
                switch(retorno)
                {
                    case 1:
                        printf("Alumno ingresado");
                    break;

                    case -1:
                        printf("Espacio agotado");
                    break;
                }
            break;
            case 2:
                mostrarAlumnos(legajo, notaMatematica, notaProgramacion, promedio, nombre,  estado, T, OCUPADO);
            break;
            case 3:
                retorno = ModificarAlumno(legajo, notaMatematica, notaProgramacion, promedio, nombre, estado, T, OCUPADO);
                switch(retorno)
                {
                    case 1:
                        printf("Alumno modificado\n");
                    break;

                    case -1:
                        printf("No existe el alumno\n");
                    break;
                    case 0:
                        printf("Accion cancelada");
                    break;
                }
            break;
            case 4:
                retorno = EliminarAlumno(legajo, notaMatematica, notaProgramacion, promedio, nombre, estado, T, OCUPADO, LIBRE);
                switch(retorno)
                {
                    case 1:
                        printf("Alumno ELIMINADO\n");
                    break;

                    case -1:
                        printf("No existe el alumno\n");
                    break;
                    case 0:
                        printf("Accion cancelada");
                    break;
                }
            break;
            default:
            break;
        }
    }while(opcion !=10);




    return 0;
}


void inicializarEstado(int estado[], int tam, int valorInicial)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        estado[i] = valorInicial;
    }

}

int buscarLibre(int estado[], int tam, int valorInicial)
{
    int indice = -1; // busca a partir del numero -1 ( osea fuera del vector )
    int i;

    for(i = 0; i < tam; i++)
    {
        if(estado[i] == valorInicial) // si es igual a 0 (LIBRE)
        {
            indice = i; // encontro espacio libre
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
    //buscar espacio
    //si encuentro espacio le pido datos al usuario
    //si no ecnuentro espacio lo informo

    int indice;
    indice = buscarLibre(estado, tam, valorInicial); // lo qeu devuelve buscar libre lo guarda en indice
    if(indice != -1) // si devuelve algo distinto a -1, por ejemplo 0 (encontro libre)  porque -1 es valor ocupado
    {
        //pedir datos
        printf("Ingrese legajo: ");
        scanf("%d", &legajo[indice]);

        printf("Ingrese la nota de matematica: ");
        scanf("%d", &notaMatematica[indice]);

        printf("La nota de programacion: ");
        scanf("%d", &notaProgramacion[indice]);

        promedio[indice] = promedioProgramacion(notaMatematica[indice], notaProgramacion[indice]);

        printf("Ingrese el nombre: ");
        fflush(stdin);
        gets(nombre[indice]);



        estado[indice] = valorOcupado;

        indice = 1;

    }
    return indice;
}


void mostrarAlumnos(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado)
{
    int i;

    for(i=0; i<tam; i++)
    {
       if(estado[i] == valorOcupado)
       {
           printf("nombre:  %s-- legajo: %d-- nota Matematica: %d-- nota Programacion: %d-- promedio: %f--", nombre[i], legajo[i], notaMatematica[i], notaProgramacion[i], promedio[i]);
       }
    }


}
float promedioProgramacion(int notaMatematica, int notaProgramacion)
{
    float promedio;
    promedio = (float)(notaMatematica + notaProgramacion) / 2;
    return promedio;
}
int menuOpciones(int mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
int ModificarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado)
{
    int auxlegajo;
    int i;
    printf("Ingrese un legajo a buscar");
    scanf("%d", &legajo[i]);

    for(i = 0; i < tam; i++)
    {
        if(estado[i] == valorOcupado && auxlegajo == legajo[i])
        {
            printf("Ingrese una nueva nota de matematica");
            scanf("%d", &notaMatematica[i]);
            promedio[i] = promedioProgramacion(notaMatematica[i], notaProgramacion[i]);
            break;
        }




    }




    return 1 ;
}
int EliminarAlumno(int legajo[], int notaMatematica[], int notaProgramacion[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado, int valorInicial)
{
    int auxlegajo;
    int i;
    printf("Ingrese un legajo a buscar");
    scanf("%d", &legajo[i]);

    for(i = 0; i < tam; i++)
    {
        if(estado[i] == valorOcupado && auxlegajo == legajo[i])
        {
            estado[i] = valorInicial;
            break;
        }




    }




    return 1 ;
}


