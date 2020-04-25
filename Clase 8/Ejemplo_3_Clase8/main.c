#include <stdlib.h>
#include "Alumno.h"

#define T 3
//ESTRUCTURAS CON VECTORES

int main ()
{
  //tipodedato nombrevariable;

    eAlumno listaAlumnos[T];


    cargarTodosLosAlumnos(listaAlumnos, T);

    //mostrarTodosLosAlumnos(listaAlumnos, T);

    mostrarAlumnosAprobados(listaAlumnos, T,7);



  return 0;
}

