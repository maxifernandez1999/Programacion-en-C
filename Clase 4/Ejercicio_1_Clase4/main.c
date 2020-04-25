#include <stdio.h>
//Crear una función que permita calcular el factorial de un numero con una estructura repetitiva
int getFactorial(int numero);
int main()
{
    int factorial;
    int numero;
    printf("ingrese un numero ");
    scanf("%d",&numero);
    factorial = getFactorial(numero);
    printf("El factorial da %d",factorial);


    return 0;
}
int getFactorial(int numero)
{
    int factorial = 1;


    for(numero; numero > 1 ; numero--)
    {
        factorial *= numero;
    }
    return factorial;
}
