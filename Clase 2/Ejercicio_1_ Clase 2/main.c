#include <stdio.h>

int main()
{
    int numero1;
    float flotante;


    flotante = 5.3289;
    numero1 = (int)flotante; //forma explicita
    printf("El entero %d -- El flotante: %.2f", numero1, flotante);

    return 0;
}
