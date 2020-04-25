#include <stdio.h>
#define T 5 // define un valor para utilizar en todo el codigo.

int main()
{
    int numeros[T]; // = {} otra forma de inicializar
    int aux;
    int posicion;
    int i;
    char seguir;

    // carga de datos secuencial ( carga el vector desde el primer elemento hasta el ultimo)


    /*for(i=0; i<T; i++)
    {
        printf("Ingrese un numero: "); // numeros[i] se posiciona sobre todos los elementos del array
        scanf("%d", &numeros[i]); // se le pasa la direccion de memoria de cada elemento ( & )
    }
    for(i=0; i<T; i++)
    {
        printf("%d\n", numeros[i]); // muestra los elementos por pantalla, secuencial

    }*/



    // carga aleatoria ( el usuario elija cuantos datos quiere cargar )
    // 1. inicializar el array
    for(i=0; i<T; i++)
    {
        numeros[i]=0; // inicializa todos los elementos en 0 en este caso
    }

    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &aux);
        printf("Ingrese la posicion: ");
        scanf("%d", &posicion);

        numeros[posicion-1] =aux; // en el vector numero en la posicion -1 se guarda aux;

        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &seguir);

    }while(seguir=='s');

    for(i=0; i<T; i++)
    {
        printf("%d\n", numeros[i]); // muestra los elementos por pantalla, aleatoria.

    }











    /*for(i=0; i<T; i++) // muestra solo los datos que cargo el usuario. aleatoria
    {
        if(numeros[i]!=0) // se pone -1 si se toma el 0 como valor( el valor inicializado )
        {
            printf("%d\n", numeros[i]);
        }


    }*/







    return 0;
}
