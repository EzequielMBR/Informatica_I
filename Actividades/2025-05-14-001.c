#include <stdio.h>

int main(){

    char caracter;
    int contador_a = 0;
    int contador_e = 0;
    int contador_i = 0;
    int contador_o = 0;
    int contador_u = 0;
    int contador_consonantes = 0;
    int contador_vocales = 0;
    int contador_total = 0;
    float porcentaje_vocales = 0;
    float porcentaje_consonantes = 0;

    printf("\nEstara ingresando caracteres hasta ingresar el caracter '0'.\n");

    do{
        printf("\n\nIngrese un caracter: ");
        scanf(" %c", &caracter);

        if((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122))
        {
            switch(caracter)
            {
            case 'a': case 'A':
                contador_a++;
                break;
            case 'e': case 'E':
                contador_e++;
                break;
            case 'i': case 'I':
                contador_i++;
                break;
            case 'o': case 'O':
                contador_o++;
                break;
            case 'u': case 'U':
                contador_u++;
                break;
            default:
                contador_consonantes++;
                break;
            }
        }
    } while(caracter != '0');

    contador_vocales = contador_a + contador_e + contador_i + contador_o + contador_u;
    contador_total = contador_vocales + contador_consonantes;

    porcentaje_vocales = (contador_vocales * 100) / contador_total;
    porcentaje_consonantes = (contador_consonantes * 100) / contador_total;

    printf("Ingreso el caracter '0'. El programa finalizó.\n\n");
    printf("La cantidad de vocales A ingresadas fue de: %d\n", contador_a);
    printf("La cantidad de vocales E ingresadas fue de: %d\n", contador_e);
    printf("La cantidad de vocales I ingresadas fue de: %d\n", contador_i);
    printf("La cantidad de vocales O ingresadas fue de: %d\n", contador_o);
    printf("La cantidad de voacles U ingresadas fue de: %d\n\n", contador_u);

    printf("El porcentaje de vocales fue de: %.2f\n", porcentaje_vocales);
    printf("El porcentaje de consonanes fue de: $.2f\n", porcentaje_consonantes);

return 0;
}
