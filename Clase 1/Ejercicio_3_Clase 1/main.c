#include <stdio.h>
//ingresar un mes e imprimir :
// si es invierno, primavera, verano, oto�o
int main()
{
    char mes;

    printf("Ingrese mes del a�o");
    scanf("%c", &mes);

    switch(mes)
    {
        case 'e':
        case 'f':
        case 'm':
            printf("es verano \n");
        break;

        case 'A':
        case 'M':
        case 'j':
            printf("es oto�o \n");
        break;

        case 'J':
        case 'a':
        case 's':
            printf("es invierno \n");
        break;

        case 'o':
        case 'n':
        case 'd':
            printf("es primavera \n");
        break;
        default:
            printf("reingrese un mes");
        break;

    }


    return 0;
}
