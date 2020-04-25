#include "Alumno.h"

void cargarTodosLosAlumnos(eAlumno listado[], int tam)
{
    int i; //para cargar todos los alumnos se usa un for con la funcion para crear un alumno;

    for(i=0; i<tam; i++)
    {
        listado[i] = crearUnAlumno();
    }
}
void mostrarTodosLosAlumnos(eAlumno listado[], int tam) //idem .
{
    int i;

    for(i=0; i<tam; i++)
    {
        mostrarUnAlumno(listado[i]);
    }

}

eAlumno crearUnAlumno (void)
{
    eAlumno miAlumno;

    printf ("Ingrese legajo: ");
    scanf ("%d", &miAlumno.legajo);
    printf ("Ingrese nota 1: ");
    scanf ("%d", &miAlumno.nota1);
    printf ("Ingrese nota 2: ");
    scanf ("%d", &miAlumno.nota2);
    printf ("Ingrese nombre: ");
    fflush (stdin);
    gets(miAlumno.nombre);
    printf ("Ingrese email: ");
    fflush (stdin);
    gets (miAlumno.email);
    miAlumno.promedio = promediarNotasAlumno(miAlumno.nota1,miAlumno.nota2);

    return miAlumno;

}


void mostrarUnAlumno (eAlumno miAlumno)
{
    printf ("%8d %8d %8d %8f %15s %15s\n",  miAlumno.legajo,
                                            miAlumno.nota1,
                                            miAlumno.nota2,
                                            miAlumno.promedio,
                                            miAlumno.nombre,
                                            miAlumno.email);
}

void mostrarAlumnosAprobados(eAlumno listado[], int tam, int aprobado)
{
   int i;

   for(i=0; i<tam; i++)
   {
       if(listado[i].nota1 >= aprobado && listado[i].nota2 >= aprobado)
        // verifica si en las notas de cada alumno es mayor al aprobado ;
       {
            mostrarUnAlumno(listado[i]); //  muestra los alumnos aprobados
       }

   }
}

float promediarNotasAlumno(int nota1, int nota2)
{
    return (float) (nota1+nota2)/2; // funcion para sacar el promedio de notas de un solo alumno
    //para sacar el de todos, se mete dentro de una estructura repetitiva.
}
