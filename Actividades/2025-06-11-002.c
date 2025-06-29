#include <stdio.h>

int main ()
{
    int numero_ingresado = 0;
    int numero_mayor = 0;
    int i;

    printf("\n\nIngrese 30 numeros.\n\n");

    for(i = 0; i < 5; i++)
    {
        printf("Ingrese numero: ");
        fflush(stdin);
        scanf("%d", &numero_ingresado);

        if(i == 0 || numero_ingresado > numero_mayor)
        {
            numero_mayor = numero_ingresado;
        }
    }

    printf("\n\nEl mayor numero ingresado fue: %d", numero_mayor);

    return 0;
}
