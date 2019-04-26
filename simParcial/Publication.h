#ifndef PUBLICATION_H_INCLUDED
#define PUBLICATION_H_INCLUDED

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

void pub_show(Publication publications[],int max);

int pub_searchFree(Publication publication[],int max);

#endif // PUBLICATION_H_INCLUDED
