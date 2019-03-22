#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int pedirNumeros(void);

int main()
{
    pedirNumeros();

    return 0;
}

int pedirNumeros(void)
{
    int maximo=INT_MIN;
    int minimo=INT_MAX;
    int buffer=0;
    do
    {
        printf("Ingrese un numero entero, o -1 para salir: \n");
        scanf("%d",&buffer);
        if(buffer>maximo)
        {
            maximo=buffer;
        }
        if(buffer<minimo)
        {
            minimo=buffer;
        }
    }while(buffer!=-1);
    printf("El numero maximo es: %d y el minimo es: %d",maximo,minimo);

    return 0;
}
