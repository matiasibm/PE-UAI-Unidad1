#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;

    //Ingreso primer numero
    printf("Ingrese el primer valor a multiplicar \n");
    scanf("%d", &numero1);

    //Ingreso segundo numero
    printf("Ingrese el segundo valor a multiplicar \n");
    scanf("%d", &numero2);

    //Proceso multiplicacion
    resultado = numero1 * numero2;

    //Salida por pantalla
    printf("El resultado es %d", resultado);

   return 0;
}
