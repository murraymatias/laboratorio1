#ifndef PUBLICATION_H_INCLUDED
#define PUBLICATION_H_INCLUDED
#include "Screen.h"

typedef struct
{
    int id;
    int isEmpty;
    //-------------
    char cuit[32];
    int days;
    char file[256];
    int idScreen;
}Publication;

void pub_init(Publication publications[],int max);

void pub_printByIndex(Publication publications[],int index);

int pub_searchFree(Publication publications[],int max);

int pub_new(Publication* publications,Screen* screens,int lenPub,int lenScr);



#endif // PUBLICATION_H_INCLUDED
