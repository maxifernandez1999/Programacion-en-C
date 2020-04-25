#include <stdio.h>
#include <string.h>
#include <ctype.h> // carpeta par usar to lower

void getString(char dato[], char mensaje[]);

int main()
{
    char palabra1[15] ;
    char palabra2[15] = "arbol";

    char letra;
    int len;
    int comp;

    getString(palabra1, "Ingrese una palabra: ", 15);


    //int strlen(const char*) PROTOTIPO

    len = strlen(palabra1);

    printf("%d\n", len);
    printf("La palabra es: %s",palabra1);*/

    //char* strcpy(char*,  const char* ) PROTOTIPO

    strcpy(palabra2,palabra1);
    puts(palabra2);


    //int strcmp(const char*, const char*); PROTOTIPO

    comp = strcmpi(palabra1, palabra2);

    printf("%d", comp);

    //EJEMPLO
    if(stricmp(palabra1,"Avellaneda")==0)
    {
        printf("Vive en avellaneda");
    }
    else
    {
        printf("No vive en avellaneda");
    }


    strupr(palabra1);

    strlwr(palabra1);

    letra = tolower(palabra1[0]);

    printf("%c\n", letra);

    puts(palabra1);


    strcat(palabra2, palabra1);

    puts(palabra2);


    int i = 0;

    while(palabra1[i]!='\0') //funcion strlen( SE PUEDEN CREEAR LAS FUNCIONES SI NO EXISTEN)

    {

       i++;
    }

    printf("El largo es: %d", i);


    return 0;
}



void getString(char dato[], char mensaje[], int tam)
{
    int len;
    printf("%s", mensaje);
    fflush(stdin);
    //scanf("%s", palabra);
    //linux

     fgets(dato, tam, stdin);

     len = strlen(dato);

     dato[len-1] = '\0';
}
 /*windows
    gets(palabra);
    */

