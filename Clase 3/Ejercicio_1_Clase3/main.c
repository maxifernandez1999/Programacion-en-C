#include <stdio.h>
#include <stdlib.h>

int getInt(char mensaje[],char mensajeError[], int min, int max); //forma de pedir datos de forma generica


int main()
{
    int numero;
    int edad;
    int legajo;

    edad = getInt("INGRESE EDAD:","Error, reingrese edad", 1, 18);
    legajo = getInt("INGRESE LEGAJO:","Error, reingrese legajo", 1000,5000);


    printf("La edad es %d\n", edad);
    printf("El legajo es %d", legajo);
    return 0;
}
int getInt(char mensaje[],char mensajeError[], int min, int max)
{
    int valorEntero;

    printf("%s", mensaje);
    scanf("%d", &valorEntero);
    while(valorEntero < min || valorEntero > max)
    {
        printf("%s", mensajeError);
        scanf("%d", &valorEntero);
    }

    return valorEntero;
}
