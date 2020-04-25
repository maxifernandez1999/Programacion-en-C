#include <stdio.h>
#define T 10

int
main ()
{
    int numeros[T];
    int aux;
    int posicion;
    int i;
    char seguir;
    int acumuladorNumeros = 0;
    int maximo;
    float promedio;

  /*secuencial




     for(i=0; i<T; i++)
     {
     numeros[i]=-1;
     }

     /*do
     {

     printf("Ingrese un numero: ");
     scanf("%d", &aux);
     printf("Ingrese la posicion: ");
     scanf("%d", &posicion);

     numeros[posicion-1] =aux;


     printf("Desea continuar? s/n");
     __fpurge(stdin);
     scanf("%c", &seguir);

     }while(seguir=='s'); */



    for (i = 0; i < T; i++)
    {
      printf ("Ingrese un numero: ");
      scanf ("%d", &numeros[i]);
    }

    for (i = 0; i < T; i++) // total de acumulador (o suma total de los elementos de array)
    {
      acumuladorNumeros = acumuladorNumeros + numeros[i];
    }

    printf ("\nEl total acumulado es: %d", acumuladorNumeros);
    promedio = (float)acumuladorNumeros/T; // acumulador / T porque es carga secuencial, si es aleatoria tendria que hacer un contador
    printf("\nEl promedio es: %f", promedio);



    for (i = 0; i < T; i++) // maximo
    {
        if (numeros[i] > maximo || i == 0)
    	{
    	  maximo = numeros[i];
    	}
    }
    printf ("\nEl maximo es: %d\n", maximo);


    for (i = 0; i < T; i++) // muestra el listado por pantalla
    {
      printf ("%d\n", numeros[i]);
    }

  return 0;
}

