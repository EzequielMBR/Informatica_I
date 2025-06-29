#include <stdio.h>      // Biblioteca Estandar de Entradas y Salidas

int main()      // Función principal
{
    int numero_natural = 2;     // Variable de los números naturales pares con valor inicial 2
    int acumulador = 0;         // Variable del acumulador para sumar los número naturales
    int contador = 0;           // Variable del contador

    printf("Se sumaran los primeros veinte numeros naturales.\n");      // Indico al usuario qué se va hacer

    while(contador < 20)        // Mientras el contador tenga un valor menor a 20
    {
        acumulador += numero_natural;           // El acumulador suma el valor natural guardado en el momento
        numero_natural = numero_natural + 2;    // Increment en 2 la variable de los números naturales pares (por eso sumo 2)
        contador++;                             // Incremento el contador
    }

    printf("El resultado es: %d.\n\n", acumulador);     // Muestro el resultado

    printf("UNIVERSIDAD TECNOLOGICA NACIONAL - FACULTAD REGIONAL AVELLANEDA\n");
    printf("INGENIERIA ELECTRONICA - INFORMATICA I\n\n");
    printf("14-05-2025");

    return 0;       // Devuelve el valor 0 para indicar que el algoritmo se ejecutó correctamente
}
