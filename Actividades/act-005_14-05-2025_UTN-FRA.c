#include <stdio.h>

int main()
{
    char caracter;
    int contador_a = 0;
    int contador_e = 0;
    int contador_i = 0;
    int contador_o = 0;
    int contador_u = 0;
    int contador_consonantes = 0;

    int contador_vocales;
    int porcentaje_vocales;
    int porcentaje_consonantes;


    printf("\nUsted ingresara caracteres hasta ingresar el caracter (0).\n");

    do
    {
        printf("\nIngrese un caracter:\n");
        scanf("%c", caracter);

        if(caracter == 'A' || caracter == 'a')
        {
            contador_a++;
        }
        if(caracter == 'E' || caracter == 'e')
        {
            contador_e++;
        }
        if(caracter == 'I' || caracter == 'i')
        {
            contador_i++;
        }
        if(caracter == 'O' || caracter == 'o')
        {
            contador_o++;
        }
        if(caracter == 'U' || caracter == 'u')
        {
            contador_u++;
        }
        if(caracter != 'A' && caracter != 'a' &&
           caracter != 'E' && caracter != 'e' &&
           caracter != 'I' && caracter != 'i' &&
           caracter != 'O' && caracter != 'o' &&
           caracter != 'U' && caracter != 'u')
        {
            contador_consonantes++;
        }
    }
    while(caracter != '0');

    printf("\nUsted ingreso el caracter (0).\n\n");
    printf("Se ingresaron %d vocales (A).\n", contador_a);
    printf("Se ingresaron %d vocales (E).\n", contador_e);
    printf("Se ingresaron %d vocales (I).\n", contador_i);
    printf("Se ingresaron %d vocales (O).\n", contador_o);
    printf("Se ingresaron %d vocales (U).\n", contador_u);
    printf("Se ingresaron %d consonantes.\n", contador_consonantes);

    contador_vocales = contador_a + contador_e + contador_i + contador_o + contador_u;
    porcentaje_vocales = (contador_vocales / (contador_vocales + contador_consonantes)) * 100;

    printf("\nEl porcentaje de vocales es: %d %.", porcentaje_vocales);


    return 0;
}
