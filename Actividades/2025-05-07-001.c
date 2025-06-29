#include <stdio.h>      // Biblioteca Estandar de Entradas y Salidas

int main()      // Función Principal
{
    int numero;     // Variable donde se guardará el número ingresado

    printf("Ingrese un numero:  ");     // Indico que el ususario ingrese un número entero
    scanf("%d", &numero);               // Leo la entrada

    if(numero < 0)                                                  // Si el número es menor a cero
    {
        printf("\n\nSu numero es %d y es negativo.\n\n", numero);   // Indico el número y que es negativo
    }
    if(numero == 0)                                                 // Si el número es igual a cero
    {
        printf("\n\nSu numero es 0 (cero).\n\n", numero);           // Indico que es cero
    }
    if(numero > 0)                                                  // Si el número es mayor a cero
    {
        printf("\n\nSu numero es %d y es positivo.\n\n", numero);   // Indico que es positivo
    }

    printf("UNIVERSIDAD TECNOLOGICA NACIONAL - FACULTAD REGIONAL AVELLANEDA\n");
    printf("INGENIERIA ELECTRONICA - INFORMATICA I\n");
    printf("07-05-2025\n\n");

    return 0;       // Devuelve el valor 0 para indicar que el algoritmo se ejecutó con éxito
}
