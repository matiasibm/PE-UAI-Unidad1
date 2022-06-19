#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    int pan;
    int resultado;

    //Ingreso kilos de pan
    printf("Ingrese cuantos kilos de pan compro \n");
    scanf("%d", &pan);

    //Proceso multiplicacion
    resultado = pan * 1000;

    //Salida por pantalla
    printf("Usted compro %d gramos de pan", resultado);

    return 0;

}
