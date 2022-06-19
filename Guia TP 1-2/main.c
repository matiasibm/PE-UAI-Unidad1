#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    char letra;

    //Ingreso letra
    printf("Ingrese una letra cualquiera \n");
    scanf("%c", &letra);

    //Salida por pantalla
    printf("Usted ha elegido la letra: %c ", letra);

    return 1;
}
