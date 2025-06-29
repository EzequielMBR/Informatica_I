#include<stdio.h>

int main()
{
    int numero_mayor = -1;
    int numero_ingresado = 0;
    int i = 0;

    printf("\n\n");

    for(i = 0; i < 30; i++)
    {
        printf("Ingrese 30 numeros enteros: ");
        fflush(stdin);
        scanf("%d", &numero_ingresado);

        if(numero_ingresado < 0)
        {
            printf("\nEl numero ingresado debe ser positivo.\n");
            i--;
            continue;
        }
        if(numero_ingresado > numero_mayor)
        {
            numero_mayor = numero_ingresado;
        }
    }

    printf("\n\nEl mayor fue: %d\n\n", numero_mayor);

    return 0;
}
