#include <stdio.h>
#include <stdlib.h>
#define T 5
void ordenarNumerosAsc(int[], int tam);
int main()
{
    int ordenarNumeros;
    int numeros[T] = {1,3,5,2,3};
    ordenarNumeros = ordenarNumerosAsc(numeros, T);
    printf("%d\n", ordenarNumeros);
    return 0;
}

void ordenarNumerosAsc(int vector[], int tam)
{
    int i;
    int j;
    int aux;
    for(i=0; i<tam-1; i++)//verde
    {
          for(j=i+1; j<tam; j++)//rojo
          {
              if(vector[i]==-1 || vector[j]==-1) // condicion para que no ordene lo que no ingresamos
              {
                  continue;
              }
              if(vector[i] > vector[j])//criterio de ordenamiento
              {
                  aux = vector[i];
                  vector[i] = vector[j];
                  vector[j] = aux;

              }
          }
    }
