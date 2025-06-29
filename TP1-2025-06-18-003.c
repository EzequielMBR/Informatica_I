#include <stdio.h>

int main()
{
    int fichas = 0;
    char producto;
    int productos_a = 0;
    int productos_c = 0;
    int sumador_c = 0;
    float promedio_c = 0;
    int precio_ingresado = 0;
    int precio_mayor = 0;
    char precio_mayor_prod = 'B';

    for(fichas = 0; fichas < 4; fichas++)
    {
        do{
            printf("\nIngrese el producto vendido: ");
            fflush(stdin);
            scanf(" %c", &producto);
        }
        while(producto != 'A' && producto != 'a' && producto != 'C' && producto != 'c');

        if(producto == 'A' || producto == 'a')
        {
            do{
                printf("Ingrese el precio:  ");
                fflush(stdin);
                scanf("%d", &precio_ingresado);
            }
            while(precio_ingresado <= 0);

            if(precio_ingresado > precio_mayor)
            {
                precio_mayor = precio_ingresado;
                precio_mayor_prod = producto;
            }
            productos_a++;
            continue;
        }

        if(producto == 'C' || producto == 'c')
        {
            do{
                printf("Ingrese el precio:  ");
                fflush(stdin);
                scanf("%d", &precio_ingresado);
            }
            while(precio_ingresado <= 0);

            if(precio_ingresado > precio_mayor)
            {
                precio_mayor = precio_ingresado;
                precio_mayor_prod = producto;
            }

            sumador_c += precio_ingresado;
            productos_c++;
            continue;
        }
    }

    printf("\nLa cantidad de productos A vendidos fue de: %d", productos_a);
    printf("\nEl precio mas alto fue: %d", precio_mayor);
    printf("\nEl producto del precio mas alto fue el: %c", precio_mayor_prod);

    promedio_c = sumador_c / productos_c;

    printf("\nEl promedio del precio delproducto C es de: %f", promedio_c);
}
