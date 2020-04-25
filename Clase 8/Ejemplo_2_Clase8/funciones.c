
#include "funciones.h"

eAlumno crearUnALumno () //retorna miAlumno
{
    eAlumno miAlumno;


    printf ("Ingrese legajo: ");
    scanf ("%d", &miAlumno.legajo);
    printf ("Ingrese nota 1: ");
    scanf ("%d", &miAlumno.nota1);
    printf ("Ingrese nota 2: ");
    scanf ("%d", &miAlumno.nota2);
    printf ("Ingrese nombre: ");
    fflush(stdin);
    fgets (miAlumno.nombre, 20, stdin);

    miAlumno.promedio = (float) (miAlumno.nota1 + miAlumno.nota2) / 2;


    return miAlumno;

}


void mostrarUnAlumno (eAlumno miAlumno) // pasa los valores ingresados de miAlumno y no retorna nada, solo muestra por pantalla
{
    printf ("%d--%d--%d--%f--%s\n", miAlumno.legajo,
    miAlumno.nota1, miAlumno.nota2, miAlumno.promedio, miAlumno.nombre);
}
