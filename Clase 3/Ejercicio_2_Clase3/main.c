#include <stdio.h>
#include <stdlib.h>
//se debe pedir la altura de una persona, la edad y el sexo ,( tres funciones)
float GetAltura(char mensaje[],char mensajeError[]);
int GetEdad(char mensaje[], char mensajeError[]);
char GetSexo(char mensaje[], char mensajeError[]);

//ACORDARSE EL &&&&!!!!!!!!!!!!!!!!!!!!!

int main()
{
    int edad;
    float altura;
    char sexo;

    altura = GetAltura("La altura en metros es:", "Error, reingrese nuevamente");
    edad = GetEdad("La edad es:", "Error, reingrese");
    sexo = GetSexo("El sexo es m/f:", "Error, reingrese");

    printf("La altura es de: %f\n", altura);
    printf("La edad es de: %d\n", edad);
    printf("el sexo es: %c\n", sexo);

    return 0;
}
float GetAltura(char mensaje[], char mensajeError[])
{
    float AlturaEnMetros;

    printf("%s", mensaje);
    fflush(stdin);
    scanf("%f", &AlturaEnMetros);
    while(AlturaEnMetros < 1.00 || AlturaEnMetros > 3.00)
    {
        printf("%s",mensajeError);
        fflush(stdin);
        scanf("%f", &AlturaEnMetros);
    }

    return AlturaEnMetros;
}
int GetEdad(char mensaje[], char mensajeError[])
{
    int EdadPersona;

    printf("%s", mensaje);
    fflush(stdin);
    scanf("%d",&EdadPersona);
    while(EdadPersona < 1 || EdadPersona > 100)
    {
        printf("%s",mensajeError);
        fflush(stdin);
        scanf("%d", &EdadPersona);
    }


    return EdadPersona;
}
char GetSexo(char mensaje[], char mensajeError[])
{
    char SexoPersona;

    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c",&SexoPersona);
    while(SexoPersona != 'f' && SexoPersona != 'm')
    {
        printf("%s",mensajeError);
        fflush(stdin);
        scanf("%c", &SexoPersona);
    }

    return SexoPersona;
}

