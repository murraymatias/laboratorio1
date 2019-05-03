#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Publication.h"
#include "Screen.h"

static int idGen(void)
{
    static int idMax=0;
    return idMax++;
}

void pub_init(Publication publications[],int max)
{
    int i;
    for(i=0; i<max; i++)
    {
        publications[i].id=0;
        publications[i].isEmpty=1;
        publications[i].cuit[1]='\0';
        publications[i].days=0;
        publications[i].file[1]='\0';
        publications[i].idScreen=0;
    }
    return;
}

void pub_printByIndex(Publication publications[],int index)
{

    printf("\n1. CUIT: %s\n2. Days: %d\n3. File: %s\n4. idScreen: %d\n",    publications[index].cuit,
                                                                            publications[index].days,
                                                                            publications[index].file,
                                                                            publications[index].idScreen);
    return;
}

void pub_show(Publication publications[],Screen screens[],int lenPublications,int lenScreens)
{
    int i;
    int screenPosition;
    for(i=0; i<lenPublications; i++)
    {
        if(!publications[i].isEmpty)
        {
            screenPosition=scr_getById(screens,publications[i].idScreen,lenScreens);
            printf("Id: %d\nCUIT: %s\nDays: %d\nFile: %s\nScreen: %s\n",  publications[i].id,
                                                                            publications[i].cuit,
                                                                            publications[i].days,
                                                                            publications[i].file,
                                                                            screens[screenPosition].name);
        }
    }
    return;
}

int pub_searchFree(Publication publications[],int max)
{
    int ret=-1;
    int i;
    for(i=0; i<max; i++)
    {
        if(publications[i].isEmpty==1)
        {
            ret=i;
            break;
        }
    }
    return ret;
}

int pub_new(Publication* publications,Screen* screens,int lenPub,int lenScr)
{
    int ret=-1;
    char bufferCuit[32];
    char bufferFile[255];
    int bufferDays;
    int bufferIdScreen=-1;
    int freeIndex=pub_searchFree(publications,lenPub);

    while(bufferIdScreen<0)
    {
        bufferIdScreen=scr_selectScreen(screens,lenScr);
    }

    if( !utn_getString(bufferCuit,"\nIngrese CUIT: ","\nCUIT invalido",1,32,10)&&
        !utn_getString(bufferFile,"\nIngrese Archivo: ","\nArchivo invalido",1,254,10)&&
        !utn_getInt(&bufferDays,"\nIngrese cantidad dias: ","\nCantidad dias invalida",1,100,10)&&
        bufferIdScreen>=0&&
        freeIndex>=0)
    {
        publications[freeIndex].id=idGen();
        publications[freeIndex].isEmpty=0;
        strncpy(publications[freeIndex].cuit,bufferCuit,32);
        strncpy(publications[freeIndex].file,bufferFile,255);
        publications[freeIndex].days=bufferDays;
        publications[freeIndex].idScreen=bufferIdScreen;
        ret=0;
    }
    return ret;
}

