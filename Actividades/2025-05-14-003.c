#include <stdio.h>      // Biblioteca Estandar de Entradas y Salidas

int main()      // Función principal
{
    int numero;                     // Variable del número ingresado por el usuario
    int acumulador = 0;             // Variable del acumulador
    int cantidad_numeros = 0;       // Variable para contar la cantidad de números sumados
    int contador = 0;               // Variable del contador

    while(contador < 20)        // Mientras el contador sea menor a 20
    {
        printf("Ingrese el numero entero %d:  ", contador+1);       // Indico al usuario que ingrese un número entero. contador+1 = n° entero a ingresar
        scanf("%d", &numero);                                       // Leo el valor ingresado y lo guardo en la variable numero

        if(numero > 0)      // Si el número es positivo
        {
            acumulador += numero;       // Sumo el número al acumulador
            cantidad_numeros++;         // Incremento la variable de números sumados
        }

        contador++;     // Incremento el contador
    }

    printf("\n\nEl resultador es: %d.\n", acumulador);                          // Indico el resultado de la suma de los número positivos ingresados
    printf("La cantidad de numeros sumados es: %d.\n\n", cantidad_numeros);     // Indico la cantidad de números sumados

    printf("UNIVERSIDAD TECNOLOGICA NACIONAL - FACULTAD REGIONAL AVELLANEDA\n");
    printf("INGENIERIA ELECTRÓNICA - INFORMATICA I\n\n");
    printf("14-05-2025");

    return 0;       // Devuelve un valor 0 para indicar que el algoritmo se ejecutó correctamente
}
