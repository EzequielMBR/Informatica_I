#include <stdio.h>

int main ()
{
    int legajo_mayor = 0;
    int legajo_ingresado = 1;
    int peso_mayor = 0;
    int peso_ingresado = 1;
    int estudiante = 1;

    printf("\nIngrese el número de legajo y peso de cada estudiante.\n");
    printf("¡SI USTED INGRESA EL LEGAJO O PESO 0 (CERO) TERMINA EL CONTEO!\n\n");

    do
    {
        printf("Ingrese el legajo del estudiante %d:  ", estudiante);
        fflush(stdin);
        scanf("%d", &legajo_ingresado);

        if(legajo_ingresado == 0)
        {
            break;
        }
        if(legajo_ingresado < 0)
        {
            printf("\nNO SE PUEDE INGRESAR UN LEGAJO NEGATIVO\n");
            continue;
        }

        printf("Ingrese el peso del estudiante %d:  ", estudiante);
        fflush(stdin);
        scanf("%d", &peso_ingresado);

        if(peso_ingresado == 0)
        {
            break;
        }
        if(peso_ingresado < 0)
        {
            printf("\nNO SE PUEDE INGRESAR UN PESO NEGATIVO\n");
            continue;
        }

        if(estudiante == 1 || peso_ingresado > peso_mayor)
        {
            peso_mayor = peso_ingresado;
            legajo_mayor = legajo_ingresado;
        }

        estudiante++;
    }
    while(peso_ingresado > 0 || legajo_ingresado > 0);

    if(estudiante == 1)
    {
        printf("\nNO SE INGRESO NINGUN ESTUDIANTE\n\n");
    }
    else
    {
        printf("\nEl N de legajo del primer estudiante ingresado de mayor peso es: %d", legajo_mayor);
    }

    return 0;
}
