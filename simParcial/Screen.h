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

void scr_init(Screen screens[],int max);

void scr_show(Screen screens[],int max);

int scr_searchFree(Screen screens[],int max);

int scr_new(Screen screens[],int max);

#endif // SCREEN_H_INCLUDED
