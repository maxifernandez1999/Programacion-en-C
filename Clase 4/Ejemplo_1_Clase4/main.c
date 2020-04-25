#include <stdio.h>
#include <stdlib.h>
/*1. mantenibilidad: mantener el programa
2. reutilizacion: puedo utilizar una misma funcion para varias cosas
3. depuracion: encontrar errores mas rapido
4. independencia de codigo: lograr q no dependan entre si*/
//devuelve 1 si es par 0 si es impar
//alcance - scape - visibilidad de variables
int esPar(int numero); //void; no recibe nada. por defecto viene int
int main()
{
    int esVerdadero;
    int numero;
    esVerdadero = esPar(numero); //HARDCOREAR: es pasarle un valor a la variable ej 8
    printf("%d", esVerdadero);
    return 0;
}
int esPar(int numero)
{
    //no se declara la variable numero porque ya esta como argumento
    int esVerdadero = 0;


    printf("ingrese un numero");
    scanf("%d",&numero);
    if(numero%2==0)
    {
        esVerdadero = 1;
    }
    return esVerdadero;

}//ejemplo para que una funcion sea independiente
