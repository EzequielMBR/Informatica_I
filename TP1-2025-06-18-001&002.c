#include <stdio.h>

int main(){
    int entero_ingresado = 0;
    int entero_mayor = 0;
    int contador_mayor = 0;
    int entero_menor = 0;
    int contador_menor = 0;
    int contador = 1;
    char opcion = 0;

    printf("\nIngrese al menos 3 números enteros.\n\n");

    do
    {
        printf("\nIngrese el %d numero:  ", contador);
        fflush(stdin);
        scanf("%d", &entero_ingresado);

        if(contador == 1)
        {
            entero_mayor = entero_ingresado;
            contador_mayor = contador;
            entero_menor = entero_ingresado;
            contador_menor = contador;

            contador++;
            continue;
        }

        if(entero_ingresado > entero_mayor)
        {
            entero_mayor = entero_ingresado;
            contador_mayor = contador;

            contador++;
            continue;
        }

        if(entero_ingresado < entero_menor)
        {
            entero_menor = entero_ingresado;
            contador_menor = contador;

            contador++;
            continue;
        }

        contador++;
    }
    while(contador < 3);

    do
    {
        printf("\nIngrese el %d numero:  ", contador);
        fflush(stdin);
        scanf("%d", &entero_ingresado);

        if(entero_ingresado > entero_mayor)
        {
            entero_mayor = entero_ingresado;
            contador_mayor = contador;
        }

        if(entero_ingresado < entero_menor)
        {
            entero_menor = entero_ingresado;
            contador_menor = contador;
        }

        do
            {
                printf("\n¿Desea continuar?  SI (S)   NO (N).\n");
                fflush(stdin);
                scanf(" %c", &opcion);
            }
            while(opcion != 'S' && opcion != 's' && opcion != 'N' && opcion != 'n');

            if(opcion == 'S' || opcion == 's')
                {
                    contador++;
                    continue;
                }

            break;
    }
    while((opcion != 'N' || opcion != 'n') && contador >= 3);

    printf("\nEl entero mayor ingresado fue el:  %d", entero_mayor);
    printf("\nQue fue el %d numero ingresado.", contador_mayor);
    printf("\nEl entero menor ingresado fue el:  %d", entero_menor);
    printf("\nQue fue el %d numero ingresado.", contador_menor);

    return 0;
}
