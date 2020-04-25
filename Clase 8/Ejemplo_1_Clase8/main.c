#include <stdio.h>
#include <stdlib.h>

typedef struct // prototipo de la estructura
{
    int legajo; //reserva en memoria 36 bytes
    int nota1; // campos de la estructura
    int nota2;
    float promedio;
    char nombre[20];
} eAlumno; // eAlumno es el tipo de variable. (ej: int)


int main()
{
    //tipodedato nombrevariable;

    eAlumno miAlumno; // nombre de la estructura : se puede hardcodear
    eAlumno otroAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo); // para ingresar a una variable dentro de una struct se utiliza el punto
    printf("Ingrese nota 1: ");
    scanf("%d", &miAlumno.nota1);
    printf("Ingrese nota 2: ");
    scanf("%d", &miAlumno.nota2);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    miAlumno.promedio = (float)(miAlumno.nota1+miAlumno.nota2)/2;
    otroAlumno = miAlumno; // puedo asignarle los mismos datos si son los mismos tipos de datos
    //se trabaja por valor
    printf("Legajo : %d\n Nota 1: %d\n Nota 2: %d\n Promedio: %.2f\n Nombre: %s\n", miAlumno.legajo,
                                                                                    miAlumno.nota1,
                                                                                    miAlumno.nota2,
                                                                                    miAlumno.promedio,
                                                                                    miAlumno.nombre);

    printf("Legajo : %d\n Nota 1: %d\n Nota 2: %d\n Promedio: %.2f\n Nombre: %s\n", otroAlumno.legajo,
                                                                                    otroAlumno.nota1,
                                                                                    otroAlumno.nota2,
                                                                                    otroAlumno.promedio,
                                                                                    otroAlumno.nombre);
    return 0;
}
