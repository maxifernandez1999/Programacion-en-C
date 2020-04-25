#include <stdio.h>

typedef struct
{
  int legajo;
  int nota1;
  int nota2;
  float promedio;
  char nombre[20];
  char email[20];

} eAlumno;


void cargarTodosLosAlumnos(eAlumno listado[], int tam);
void mostrarTodosLosAlumnos(eAlumno listado[], int tam);
void mostrarAlumnosAprobados(eAlumno listado[], int tam, int aprobado);
void mostrarUnAlumno(eAlumno miAlumno);
eAlumno crearUnAlumno(void);
float promediarNotasAlumno(int nota1, int nota2);
