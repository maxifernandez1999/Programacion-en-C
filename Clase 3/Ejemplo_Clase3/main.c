#include <stdio.h>
#include <stdlib.h>
// dividir un problema en funciones mas chiquitas
int Saludar(int); //declaracion o prototipado; o firma

int main()
{

    int valor;
    valor = Saludar(4); //llamada o invocacion //parametro actual
    printf("el numero ingresado es %d", numero);
    return 0;
}

int Saludar(int numero) //implementacion o desarrollo; escribir el codigo //parametro formal

{
    int unEntero;
    printf("Hola el numero es: %d\n");
    printf("ingrese un entero");
    scanf("%d", &unEntero);

    return unEntero; //cuando la funcion devuelve algo a la llamada;
}

/*VENTAJAS : MEJORA LA DETECCION DE ERROR DEL CODIGO
GENERA DEPENDENCIA DE CODIGO : CADA FUNCION ES INDEPENDENCIA
MANTENIMIENTO: FACIL DE MANTENER
*/

/*PARA QUE ESTA EL PROTOTIPO? SIRVE PARA VERIFICAR
LA CONSISTENCIA DE LA FUNCION Y EVITAR ERRRORES AL
PROGRAMAR*/
