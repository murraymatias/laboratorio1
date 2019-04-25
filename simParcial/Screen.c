#include <stdio.h>
#include "utn.h"
#include "Screen.h"

void scr_init(Screen screens[],int max)
{
    int i;
    for(i=0;i<max;i++)
    {
        screens[i].isEmpty=1;
    }
    return;
}

void scr_show(Screen screens[],int max)
{
    int i;
    for(i=0;i<max;i++)
    {
        printf("Id: %d\nIsEmpty: %s\nCUIT: %s\n",screens[i].id,
                                                screens[i].isEmpty,
                                                screens[i].name);
    }
    return;
}
int scr_searchFree(Screen screens[],int max)
{
    int ret=-1;
    int i;
    for(i=0;i<max;i++)
    {
        if(screens[i].isEmpty==1)
        {
            ret=i;
            break;
        }
    }
    return ret;
}
int scr_new(Screen screens[],int max)
{
    char bufferName;
    char buffer
    utn_getName();
    utn_getAddress();
    utn_getFloat();
    utn_getNumber();
}
