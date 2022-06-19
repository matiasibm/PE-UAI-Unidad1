#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaración de variables
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;

    //Ingreso de primer número
    printf("Ingrese el minuendo \n");
    scanf("%d", &numero1);

    //Ingreso de segundo número
    printf("Ingrese el sustraendo \n");
    scanf("%d", &numero2);

    //Cálculo de resultado
    resultado = numero1 - numero2;

    //Salida/impresión a consola del resultado
    printf("El resultado es %d", resultado);

    return 0;
}
