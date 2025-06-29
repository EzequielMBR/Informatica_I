#include <stdio.h>

int main (){

    int dia = 0;
    int dia_max = 0;
    int dia_min = 0;
    int temperatura_max = 0;
    int temperatura_min = 0;
    int flag_val = 0;

    printf("\n\nUsted ingresara los valores de temperatura maxima y minima de siete dias.\n\n");

    for(dia = 0; dia < 7; dia++)
    {
        switch(dia)
        {
            case 1:
                do
                {
                    printf("Ingrese la temperatura maxima del dia %d: ", dia);
                    fflush(stdin);
                    scanf("%d", &temperatura_max);

                    printf("Ingrese a temperatura minima del dia %d: ", dia);
                    fflush(stdin);
                    scanf("%d", &temperatura_min);

                    if((temperatura_max > 50 || temperatura_max < -30) &&
                       (temperatura_min > 50 || temperatura_min < -30) &&
                       (temperatura_max >= temperatura_min))
                    {
                        flag_val = 1;
                    }
                }
                while(flag_val == 1);
                flag_val = 0;

            break;

            default:
            break;
        }
    }

    printf("\n\n%d", dia);

    return 0;
}
