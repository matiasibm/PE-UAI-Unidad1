#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    float numero1 = 0;
    float numero2 = 0;
    float resultado = 0;

    //Ingreso del primer numero
    printf("Ingrese el dividendo \n");
    scanf("%f", &numero1);

    //Ingreso del segundo numero
    printf("Ingrese el divisor \n");
    scanf("%f", &numero2);

    //Proceso division
    resultado = numero1 / numero2;

    //Salida por pantalla
    printf("El resultado es %f", resultado);

    return 0;
}
