#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Libreria necesaria para acceder a la funcion pow
int main()
{
    //Declaracion variables
    int numero1 = 0;
    int numero2 = 0;
    int potencia;

    //Ingreso primer numero
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    //Ingreso segundo numero
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    //Proceso potencia
    potencia = pow(numero1, numero2);

    //Salida por pantalla
    printf("El resultado de elevar %d a la %d es %d ", numero1, numero2, potencia);

    return 0;
}
