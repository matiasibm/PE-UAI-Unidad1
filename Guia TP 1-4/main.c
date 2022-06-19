#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion de variables
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;

    //Entrada primer dato
    printf("Ingrese el primer valor a sumar \n");
    scanf("%d", &numero1);

    //Entrada segundo dato
    printf("Ingrese el segundo valor a sumar \n");
    scanf("%d", &numero2);

    //Proceso de suma
    resultado = numero1 + numero2;

    //Salida por pantalla
    printf("El resultado es %d", resultado);

   return 0;
}
