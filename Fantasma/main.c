#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "autor.h"
#include "libro.h"
#include "menu.h"
#include "fantasma.h"


#define QTY_TIPO 10

int main()
{
    int opcion=0;
    int contadorIdautor=0;
    int contadorIdlibro=0;

    Autor arrayAutor[QTY_TIPO];
    autor_inicializar(arrayAutor,QTY_TIPO);
    Libro arrayLibro[QTY_TIPO];
    libro_Inicializar(arrayLibro,QTY_TIPO);
    do
    {
        utn_getUnsignedInt("\n1) Autores \n2) Libros \n3) Socios \n4) Prestamos \n5) Informar \n6) Salir\n","\nError",1,sizeof(int),1,11,1,&opcion);
        switch(opcion)
        {
            case 1:
                menuAutor(arrayAutor,contadorIdautor,QTY_TIPO);
                break;

            case 2:
                menuLibro(arrayLibro,contadorIdlibro,QTY_TIPO);
                break;

            case 3:
                //autor_baja(arrayAutor,QTY_TIPO);
                break;

            case 4:
                //autor_listar(arrayAutor,QTY_TIPO);
                break;

            case 5:
                //autor_ordenarPorString(arrayAutor,QTY_TIPO);
                break;
            case 6:
                break;
            default:
                printf("\nOpcion no valida");
        }
    }while(opcion!=6);

    return 0;
}
