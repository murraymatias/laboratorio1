#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "libro.h"
#include "autor.h"

void menuAutor(Autor* arrayAutor,int contadorIdautor,int QTY_TIPO)
 {
    int option=0;
    do
    {
        utn_getUnsignedInt("\n\n1) Alta \n2) Modificar \n3) Baja \n4) Listar \n5) Ordenar \n6) Salir\n",
                      "\nError",1,sizeof(int),1,11,1,&option);
        switch(option)
        {
            case 1:
                autor_alta(arrayAutor,QTY_TIPO,&contadorIdautor);
                break;

            case 2:
                autor_modificar(arrayAutor,QTY_TIPO);
                break;

            case 3:
                autor_baja(arrayAutor,QTY_TIPO);
                break;

            case 4:
                autor_listar(arrayAutor,QTY_TIPO);
                break;

            case 5:
                autor_ordenarPorString(arrayAutor,QTY_TIPO);
                break;

            case 6:
                break;
            default:
                printf("\nOpcion no valida");
        }
    }
    while(option!=6);
}

void menuLibro(Libro* arrayLibro,int contadorIdlibro,int QTY_TIPO)
 {
    int option=0;
    do
    {
        utn_getUnsignedInt("\n\n1) Alta \n2) Modificar \n3) Baja \n4) Listar \n5) Ordenar \n6) Salir\n",
                      "\nError",1,sizeof(int),1,11,1,&option);
        switch(option)
        {
            case 1:
                libro_alta(arrayLibro,QTY_TIPO,&contadorIdlibro);
                break;

            case 2:
                libro_modificar(arrayLibro,QTY_TIPO);
                break;

            case 3:
                libro_baja(arrayLibro,QTY_TIPO);
                break;

            case 4:
                libro_listar(arrayLibro,QTY_TIPO);
                break;

            case 5:
                libro_ordenarPorString(arrayLibro,QTY_TIPO);
                break;

            case 6:
                break;
            default:
                printf("\nOpcion no valida");
        }
    }
    while(option!=6);
}
