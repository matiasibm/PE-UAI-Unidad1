#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    int temperaturaC = 0;
    float kelvin = 273.15;
    float resultado;

    //Ingreso grados C
    printf("Ingrese la temperatura en grados Celsius \n");
    scanf("%d", &temperaturaC);

    //Proceso suma
    resultado = temperaturaC + kelvin;

    //Salida por pantalla
    printf("%f es la temperatura en grados Kelvin", resultado);

    return 0;
}
