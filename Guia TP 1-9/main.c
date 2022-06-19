#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Declaracion variables
    int numero1 = 0;
    int resultado;

    //Ingreso de numero
    printf("Ingrese el numero para averiguar su raiz cuadrada \n");
    scanf("%d", &numero1);

    //Proceso Raiz cuadrada
    resultado = sqrt(numero1);

    //Salida por pantalla
    printf("La raiz cuadrada de %d es %d", numero1, resultado);

    return 0;
}
