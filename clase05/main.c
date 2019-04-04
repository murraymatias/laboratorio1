#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define MAX 10

int main()
{
    int arrayDeInts[MAX]={1,5,0,8,546,6,4,4,6,7};
    //utn_getArrayInt(arrayDeInts,MAX,"Numro\n","Error",1,10,10);
    bubbleSortInt(arrayDeInts,MAX);

    system("pause");
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("%d \n",arrayDeInts[i]);
    }
    //calcularPromedio(&promedio,0,MAX,arrayDeInts);
    //printf("el promedio es: %.2f",promedio);

    return 0;
}
