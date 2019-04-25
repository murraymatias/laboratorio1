#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED

typedef struct
{
    int id;
    int isEmpty;
    //-------------
    char name[64];
    char address[256];
    float price;
    int type;
}Screen;

#endif // SCREEN_H_INCLUDED
