#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main()
{
    int result;
    //printf("Hello world!\n");
    getNumber(&result,5,100,1,"Ingrese un numero entre 1 y 100: \n","Error, el numero debe estar entre 1 y 100: \n");
    printf("El numero ingresado es: %d",result);
    return 0;
}
