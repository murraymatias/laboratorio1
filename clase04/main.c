#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int result;
    //printf("Hello world!\n");
    utn_getNumber(&result,"ingrese un numero entre 1 y 10:\n","Error, debe ingresar un numero entre 1 y 10:\n",1,10,5);
    printf("El numero ingresado es: %d",result);
    return 0;
}
