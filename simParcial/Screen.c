#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Screen.h"
#include "Publication.h"

static int idGen(void)
{
    static int idMax=0;
    return idMax++;
}

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
        printf("Id: %d\nIsEmpty: %d\name: %s\naddress: %s\nprice: %f\ntype: %d\n",  screens[i].id,
                                                                                    screens[i].isEmpty,
                                                                                    screens[i].name,
                                                                                    screens[i].address,
                                                                                    screens[i].price,
                                                                                    screens[i].type);
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
    int ret=-1;
    char bufferName[50];
    char bufferAddress[255];
    float bufferPrice;
    int bufferType;
    int freeIndex=scr_searchFree(screens,100);

    if( !utn_getName(bufferName,50,"\nIngrese nombre: ","\nNombre invalido",3,49,10)&&
        !utn_getAddress(bufferAddress,50,"\nIngrese direccion: ","\nDireccion invalida",5,254,10)&&
        !utn_getFloat(&bufferPrice,"\nIngrese Precio: ","\nPrecio invalido",0,50000,10)&&
        !utn_getInt(&bufferType,"Ingrese tipo\n 1. LCD\n2 LED\n","Tipo invalido",1,2,10)&&
        freeIndex<=0)
        {
            screens[freeIndex].id=idGen();
            screens[freeIndex].isEmpty=0;
            strncpy(screens[freeIndex].name,bufferName,50);
            strncpy(screens[freeIndex].address,bufferAddress,255);
            screens[freeIndex].price=bufferPrice;
            screens[freeIndex].type=bufferType;
            ret=0;
        }
    return ret;
}
