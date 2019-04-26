#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "Publication.h"
#include "Screen.h"

void pub_init(Publication publications[],int max)
{
    int i;
    for(i=0;i<max;i++)
    {
        publications[i].isEmpty=1;
    }
    return;
}

void pub_show(Publication publications[],int max)
{
    int i;
    for(i=0;i<max;i++)
    {
        printf("Id: %d\nIsEmpty: %d\nCUIT: %s\n",publications[i].id,
                                                publications[i].isEmpty,
                                                publications[i].cuit);
    }
    return;
}

int pub_searchFree(Publication publication[],int max)
{
    int ret=-1;
    int i;
    for(i=0;i<max;i++)
    {
        if(publication[i].isEmpty==1)
        {
            ret=i;
            break;
        }
    }
    return ret;
}
