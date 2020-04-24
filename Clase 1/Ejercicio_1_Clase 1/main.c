#include <stdio.h>
#define TRUE 1 //EN C. NO HAY TRUE Y FALSE COMO EN JS ENTONCES SE DEFINE EL 1 Y EL 0 COMO TRUE Y FALSE PARA QUE QUEDE MAS PROLIJO EL CODIGO.
#define FALSE 0
//Pedir tres numeros y imprimir:
//el numero maximo.

//Ejemplo de ejercicio con FLAG
// En este caso es innecesario el flag ya que lo podemos remplazar por I porque i == 1 representa el TRUE del FLAG..
int main()
{
    int maximo;
    int minimo;
    int i;
    int bufferInt;
    int flag = TRUE;


    for(i=0; i<3;i++)
    {
        printf("ingrese un numero: \n",i+1);
        scanf("%d",&bufferInt);

        if(i==1)
        {
            minimo = bufferInt;
            maximo = bufferInt;

        }else
            if(maximo < bufferInt)
            {
                maximo = bufferInt;
            }
            if(minimo > bufferInt)
            {

                minimo = bufferInt;
            }
    }
    printf("\nEl valor maximo es: %d y el valor minimo es: %d",maximo,minimo);
    return 0;
}
