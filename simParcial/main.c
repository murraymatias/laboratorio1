#include <stdio.h>
#include <stdlib.h>
#include "Screen.h"
#include "Publication.h"
#include "utn.h"

int main()
{
    Screen screens[100];
    while(1)
    {
        int option;
        utn_getInt(&option,"1. Nueva pantalla\n2. Mostrar pantallas\n","Opcion invalida\n",1,2,10);
        switch(option)
        {
            case 1:
            {
                scr_new(screens,100);
                break;
            }
            case 2:
            {
                scr_show(screens,100);
                break;
            }

        }
    }
    return 0;
}
