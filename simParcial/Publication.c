#include <stdio.h>
#include "utn.h"
#include "Publication.h"

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
        printf("Id: %d\nIsEmpty: %s\nCUIT: %s\n",publications[i].id,
                                                publications[i].isEmpty,
                                                publications[i].lastname);
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
