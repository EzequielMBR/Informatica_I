#include <stdio.h>      // Biblioteca Estandas de Entradas y Salidas

int main()      // Función principal
{
    char caracter;                      // Variable del caracter que ingresará el usuario
    int contador_a = 0;                 // Variable del contador de vocales A
    int contador_e = 0;                 // Variable del contador de vocales E
    int contador_i = 0;                 // Variable del contador de vocales I
    int contador_o = 0;                 // Variable del contador de vocales O
    int contador_u = 0;                 // Variable del contador de vocales U
    int contador_consonantes = 0;       // Variable del contador de consonantes

    int contador_vocales = 0;           // Variable del contador de vocales
    int contador_total = 0;             // Variable del contador de vocales y consonantes
    float porcentaje_vocales = 0;       // Variable del porcentaje de vocales
    float porcentaje_consonantes = 0;   // Variable del porcentaje de consonante


    printf("\nUsted ingresara caracteres hasta ingresar el caracter (0).\n");       // Indico al usuario qué debe realizar

    do      // Hacer (Ir a While, línea 55)
    {
        printf("\nIngrese un caracter:\n");     // Indico al usuario que ingrese un caracter
        scanf(" %c", &caracter);                // Leo el caracter ingresado por el usuario

        if(caracter == 'A' || caracter == 'a')      // Si el caracter es (A) o (a)
        {
            contador_a++;                           // Aumento el contador de vocales A
        }
        if(caracter == 'E' || caracter == 'e')      // Si el caracter es (E) o (e)
        {
            contador_e++;                           // Aumento el contador de vocales E
        }
        if(caracter == 'I' || caracter == 'i')      // Si el caracter es (I) o (i)
        {
            contador_i++;                           // Aumento el contador de vocales I
        }
        if(caracter == 'O' || caracter == 'o')      // Si el caracter es (O) u (o)
        {
            contador_o++;                           // Aumento el contador de vocales 0
        }
        if(caracter == 'U' || caracter == 'u')      // Si el caracter es (U) o (u)
        {
            contador_u++;                           // Aumento el contador de vocales U
        }
        if(caracter != 'A' && caracter != 'a' &&    // Si el caracter es distinto de (A), de (a),
           caracter != 'E' && caracter != 'e' &&    // de (E), de (e),
           caracter != 'I' && caracter != 'i' &&    // de (I), de (i),
           caracter != 'O' && caracter != 'o' &&    // de (O), de (o),
           caracter != 'U' && caracter != 'u')      // de (U) y de (u)
        {
            contador_consonantes++;                 // Aumento el contador de consonantes
        }
    }
    while(caracter != '0');     // (Desde hacer) Mientras el caracter ingresado por el usuario sea distinto de '0'

    printf("\nUsted ingreso el caracter (0).\n\n");                     // Indico que el usuario ingresó el caracter '0'
    printf("Se ingresaron %d vocales (A).\n", contador_a);              // Indico la cantidad de vocales A
    printf("Se ingresaron %d vocales (E).\n", contador_e);              // Indico la cantidad de vocales E
    printf("Se ingresaron %d vocales (I).\n", contador_i);              // Indico la cantidad de vocales I
    printf("Se ingresaron %d vocales (O).\n", contador_o);              // Indico la cantidad de vocales O
    printf("Se ingresaron %d vocales (U).\n", contador_u);              // Indico la cantidad de vocales U
    printf("Se ingresaron %d consonantes.\n", contador_consonantes);    // Indico la cantidad de consonantes

    contador_vocales = contador_a + contador_e + contador_i + contador_o + contador_u;                          // Sumo vocales
    contador_total = contador_a + contador_e + contador_i + contador_o + contador_u + contador_consonantes;     // Sumo vocales y consonantes
    porcentaje_vocales = (contador_vocales * 100)/contador_total;                                               // Porcentaje de vocales
    porcentaje_consonantes = (contador_consonantes * 100)/contador_total;                                       // Porcentaje de consonantes

    printf("\nEl porcentaje de vocales es: %.2f.", porcentaje_vocales);         // Indico el porcentaje de vocales con dos decimales
    printf("\nEl porcentaje de vocales es: %.2f.", porcentaje_consonantes);     // Indico el porcentaje de consonantes con dos decimales


    return 0;       // Devuelve un valor 0 para indicar que el algoritmo se ejecutó correctamente
}
