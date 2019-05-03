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
    for(i=0; i<max; i++)
    {
        screens[i].id=0;
        screens[i].isEmpty=1;
        screens[i].name[1]='\0';
        screens[i].address[1]='\0';
        screens[i].price=0;
        screens[i].type=0;
    }
    return;
}

void scr_printByIndex(Screen screens[],int index)
{

    printf("\n1. Name: %s\n2. Address: %s\n3. Price: %f\n4. Type: %d\n",    screens[index].name,
           screens[index].address,
           screens[index].price,
           screens[index].type);
    return;
}

void scr_show(Screen screens[],int max)
{
    int i;
    for(i=0; i<max; i++)
    {
        if(!screens[i].isEmpty)
        {
            printf("Id: %d\nIsEmpty: %d\nName: %s\nAddress: %s\nPrice: %f\nType: ",  screens[i].id,
                   screens[i].isEmpty,
                   screens[i].name,
                   screens[i].address,
                   screens[i].price);
            if(screens[i].type==1)
            {
                printf("LCD\n");
            }
            if(screens[i].type==2)
            {
                printf("LED\n");
            }
        }
    }
    return;
}

int scr_searchFree(Screen screens[],int max)
{
    int ret=-1;
    int i;
    for(i=0; i<max; i++)
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
            !utn_getInt(&bufferType,"Ingrese tipo\n1. LCD\n2 LED\n","Tipo invalido",1,2,10)&&
            freeIndex>=0)
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

int scr_getById(Screen screens[],int id,int max)
{
    int i;
    int ret=-1;
    for(i=0; i<max; i++)
    {
        if(screens[i].id==id)
        {
            ret=i;
            break;
        }
    }
    return ret;
}

int scr_update(Screen screens[],int max)
{
    int ret=-1;
    int auxId;
    int option;
    char bufferName[50];
    char bufferAddress[255];
    float bufferPrice;
    int bufferType;
    utn_getInt(&auxId,"\nIngrese el id de la pantalla a modificar: ","\nNumero invalido",1,9999,10);
    if(scr_getById(screens,auxId,100)>=0)
    {

        while(option!=5)
        {
            scr_printByIndex(screens,auxId);
            printf("5. Salir");
            utn_getInt(&option,"\nSeleccione campo a modificar: ","\nOpcion invalida",1,5,10);
            switch(option)
            {
            case 1:
            {
                if(!utn_getName(bufferName,50,"\nIngrese nuevo nombre: ","\nNombre invalido",3,49,10))
                {
                    strncpy(screens[auxId].name,bufferName,50);
                }
                break;
            }
            case 2:
            {
                if(!utn_getAddress(bufferAddress,50,"\nIngrese direccion: ","\nDireccion invalida",5,254,10))
                {
                    strncpy(screens[auxId].address,bufferAddress,255);
                }
                break;
            }
            case 3:
            {
                if(!utn_getFloat(&bufferPrice,"\nIngrese Precio: ","\nPrecio invalido",0,50000,10))
                {
                    screens[auxId].price=bufferPrice;
                }
                break;
            }
            case 4:
            {
                if(!utn_getInt(&bufferType,"Ingrese tipo\n1. LCD\n2 LED\n","Tipo invalido",1,2,10))
                {
                    screens[auxId].type=bufferType;
                }
                break;
            }
            }
        }
    }
    else
    {
        printf("\nNo existe pantalla con el id ingresado");
    }
    return ret;
}

int scr_selectScreen(Screen *screens,int lenScr)
{
    int ret=-1;
    int bufferIdScreen;
    printf("\nSeleccione una pantalla por su id: ");
    scr_show(screens,lenScr);
    utn_getInt(&bufferIdScreen,"\nIngrese el id de alguna de las pantallas: ","\nNumero invalido:",0,9999,10);
    if(scr_getById(screens,bufferIdScreen,lenScr)>=0)
    {
        ret=bufferIdScreen;
    }
    else
    {
        printf("\nInvalid ID");
    }

    return ret;
}
