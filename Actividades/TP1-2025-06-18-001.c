#include <stdio.h>

int main ()
{
    int legajo_ingresado = 0;
    float sueldo_ingresado = 0;
    float altura_ingresada = 0;

    int cantidad_empleados = 1;
    int cantidad_hasta_175 = 0;
    int cantidad_mas_175 = 0;
    int cantidad_mas_1500 = 0;
    int altura_mas_1500 = 0;
    float promedio_altura = 0;
    float total_sueldos = 0;

    char opcion = 0;

    do
    {
        do
        {
            printf("\nIngrese el legajo del empleado %d: ", cantidad_empleados);
            fflush(stdin);
            scanf(" %d", &legajo_ingresado);
        }
        while(legajo_ingresado <= 0 || legajo_ingresado > 1000);

        do
        {
            printf("\nIngrese la altura del empleado %d:", cantidad_empleados);
            fflush(stdin);
            scanf(" %f", &altura_ingresada);

            if(altura_ingresada > 0 && altura_ingresada <= 175)
            {
                cantidad_hasta_175++;
            }
            if(altura_ingresada > 175)
            {
                cantidad_mas_175++;
            }
        }
        while(altura_ingresada <= 0);

        do
        {
            printf("\nIngrese el sueldo del empleado %d: ", cantidad_empleados);
            fflush(stdin);
            scanf(" %f", &sueldo_ingresado);

            if(sueldo_ingresado <= 0)
            {
                printf("\nEL SUELDO NO PUEDE SER MENOR O IGUAL A 0.\n");
                continue;
            }
            if(sueldo_ingresado > 1500000 )
            {
                cantidad_mas_1500++;
                altura_mas_1500 = altura_mas_1500 + altura_ingresada;
            }

            total_sueldos = total_sueldos + sueldo_ingresado;
            cantidad_empleados++;
        }
        while(sueldo_ingresado <= 0);

        do
        {
            printf("\nDesea continuar?   SI (S)   NO (N)\n");
            fflush(stdin);
            scanf(" %c", &opcion);
        }
        while(opcion != 'N' && opcion != 'n' && opcion != 'S' && opcion != 's');

    }
    while(opcion != 'N' && opcion != 'n');

    printf("\n\nHay %d empleados que miden hasta 175cm, y %d empleados que miden más de 175cm.", cantidad_hasta_175, cantidad_mas_175);

    if(cantidad_mas_1500 != 0)
    {
        promedio_altura = altura_mas_1500 / cantidad_mas_1500;
        printf("\nEl promedio de la altura de los empleados que ganan mas de 1.500.000 es de: %.2f", promedio_altura);
    }

    if(cantidad_hasta_175 > cantidad_mas_175)
    {
        printf("\nHay mas empleados que miden menos de 175cm que empleados que miden mas de 175cm");
    }
    if(cantidad_mas_175 > cantidad_hasta_175)
    {
        printf("\nHay mas empleados que miden mas de 175cm que empleados que miden menos de 175cm");
    }

    printf("\nLa suma de los sueldos es de: %.2f.", total_sueldos);

    return 0;
}
