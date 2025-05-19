#include <stdio.h>      // Biblioteca Estandas de Entradas y Salidas

int main()      // Función principal
{
    int numero = 1;         // Variable del número natural
    int acumulador = 0;     // Variable del acumulador
    int contador = 0;       // Variable del contador

    printf("Se mostrara la suma de los 20 primeros numeros naturales.\n");      // Indico al usuario lo que se va a realizar

    do      // Hacer (Ir a While, línea 17)
    {
        contador++;                 // Aumento el contador
        acumulador += numero;       // Sumo el número al acumulador
        numero++;                   // Aumento el número natural
    }
    while(contador < 20);       // (Desde hacer) Mientras el valor del contador sea menor a 20

    printf("Su resultador es %d.", acumulador);     // Indico el resultado

    return 0;       // Devuelve un valor 0 para indicar que el algoritmo se ejecutó correctamente
}
