#include <stdio.h>


 /*pedir al usuario 2 numeros ENTEROS. Mostrar la:
        suma.
        el primer disminuido dedl segundo.
        el producto de ambos numeros.
        promedio.*/
int main()
{
    int num1;
    int num2;
    int suma;
    int resta;
    int producto;
    float promedio;

    printf("ingrese el primer numero");
    scanf("%d",&num1);
    printf("ingrese el segundo numero");
    scanf("%d",&num2);

    suma = num1 + num2;

    resta = num2 - num1;

    producto = num1 * num2;

    promedio = (float)suma / 2; //transforma entero a flotante. Explicito

    printf("la suma es %d\n" , suma);
    printf("La resta es %d\n", resta);
    printf("El producto es %d\n", producto);
    printf("El promedio es %f\n", promedio);


    return 0;
}
    //int,float,char = variables primitivas
    //alumno(nombre apellido)

    //%d mascaras

    /*int entero;
    float flotante;

    entero = 4;
    flotante = entero; //conversion implicita



    printf("flotante: %f",flotante);*/ //da como resultado 4

    /*int entero;

    printf("ingrese un numero");
    scanf("%d",&entero);

    //no hay que parsear con parseint porque ya es un numero entero

    entero = entero + 5;

    printf("entero %d",entero);
    return 0;
}*/
