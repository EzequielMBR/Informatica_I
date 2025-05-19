#include <stdio.h>      // Biblioteca Estandar de Entradas y Salidas

int main()      // Funci�n principal
{
    int numero;                     // Variable del n�mero ingresado por el usuario
    int acumulador = 0;             // Variable del acumulador
    int cantidad_numeros = 0;       // Variable para contar la cantidad de n�meros sumados
    int contador = 0;               // Variable del contador

    while(contador < 20)        // Mientras el contador sea menor a 20
    {
        printf("Ingrese el numero entero %d:  ", contador+1);       // Indico al usuario que ingrese un n�mero entero. contador+1 = n� entero a ingresar
        scanf("%d", &numero);                                       // Leo el valor ingresado y lo guardo en la variable numero

        if(numero > 0)      // Si el n�mero es positivo
        {
            acumulador += numero;       // Sumo el n�mero al acumulador
            cantidad_numeros++;         // Incremento la variable de n�meros sumados
        }

        contador++;     // Incremento el contador
    }

    printf("\n\nEl resultador es: %d.\n", acumulador);                          // Indico el resultado de la suma de los n�mero positivos ingresados
    printf("La cantidad de numeros sumados es: %d.\n\n", cantidad_numeros);     // Indico la cantidad de n�meros sumados

    printf("UNIVERSIDAD TECNOLOGICA NACIONAL - FACULTAD REGIONAL AVELLANEDA\n");
    printf("INGENIERIA ELECTR�NICA - INFORMATICA I\n\n");
    printf("14-05-2025");

    return 0;       // Devuelve un valor 0 para indicar que el algoritmo se ejecut� correctamente
}
