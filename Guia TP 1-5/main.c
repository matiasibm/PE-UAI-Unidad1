#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaraci�n de variables
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;

    //Ingreso de primer n�mero
    printf("Ingrese el minuendo \n");
    scanf("%d", &numero1);

    //Ingreso de segundo n�mero
    printf("Ingrese el sustraendo \n");
    scanf("%d", &numero2);

    //C�lculo de resultado
    resultado = numero1 - numero2;

    //Salida/impresi�n a consola del resultado
    printf("El resultado es %d", resultado);

    return 0;
}
