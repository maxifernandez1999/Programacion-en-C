#include <stdlib.h>
#include "funciones.h"


// . para acceder al campo de una estructura
int main ()
{
    //tipodedato nombrevariable;

    eAlumno miAlumno; //declaracion de las variables de tipo eAlumno;
    eAlumno otroAlumno;

    miAlumno = crearUnALumno ();
    otroAlumno = crearUnALumno ();


    mostrarUnAlumno (miAlumno);
    mostrarUnAlumno (otroAlumno);

    return 0;
}

