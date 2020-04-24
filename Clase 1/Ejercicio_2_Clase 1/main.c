#include <stdio.h>

// ingrese una edad y mostrar:
// menos de 13 años es nene.
// menor a 18 es adolescente.
// 18 o mas es mayor de edad.
int main()
{
    int edad;
    printf("\nIngrese la edad");
    scanf("%d",&edad);

    if(edad < 13)
    {
        printf("\nEs un niño");
    }else
        if(edad < 18)
        {
            printf("\nEs un adolescente");
        }else
        {

            printf("\nEs mayor de edad");
        }
    return 0;
}
