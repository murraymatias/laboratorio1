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

#endif // PUBLICATION_H_INCLUDED
