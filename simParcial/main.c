#include <stdio.h>
#include <stdlib.h>
#include "Screen.h"
#include "Publication.h"
#include "utn.h"

int main()
{
    Screen screens[100];
    Publication publications[1000];
    scr_init(screens,100);
    while(1)
    {
        int option;
        utn_getInt(&option,"1. Nueva pantalla\n2. Mostrar pantallas\n3. Modificar pantalla\n","Opcion invalida\n",1,10,10);
        switch(option)
        {
            case 1:
            {
                /*Alta de pantalla: Se solicitan al usuario los datos de la pantalla, para que el sistema
                pueda funcionar se deberá generar un ID único para cada pantalla.*/
                scr_new(screens,100);
                break;
            }
            case 2:
            {
                /*Modificar datos de pantalla: Se ingresa el ID de la pantalla, permitiendo modificar sus
                datos.*/
                scr_update(screens,100);
                break;
            }
            case 3:
            {
                /*Baja de pantalla: Se ingresa el ID de la pantalla, se eliminará la pantalla junto con todas
                las contrataciones de publicidad para esta pantalla.*/
                scr_delete(screens,100);
                break;
            }
            case 4:
            {
                /*Contratar una publicidad: ​Se listaran todas las pantallas y se le pedirá al usuario que
                elija la pantalla donde se quiere publicar, ingresando su ID. Luego se pedirán los datos
                asociados a la publicidad: cuit del cliente, cantidad de días que dura la publicación y
                nombre del archivo de video (p.ej. Video1.avi).*/
                pub_new(publications,screens,1000,100);
                break;
            }
            case 5:
            {
                /*Modificar condiciones de publicación: ​Se pedirá que se ingrese el cuit del cliente y se
                listaran todas las pantallas de video que el cliente tiene contratadas mostrando todos sus
                campos. Luego de ingresar el ID de la pantalla, se permitirá modificar la cantidad de días
                contratados para la misma.*/
                break;
            }
            case 6:
            {
                /*Cancelar contratación: ​Se pedirá que se ingrese el cuit del cliente y se listaran todas las
                pantallas de video que el cliente tiene contratadas mostrando todos sus campos. Luego
                ingresar el ID de la pantalla de la cual se quiere cancelar la contratación.*/
                break;
            }
            case 7:
            {
                /*Consulta facturación: Se deberá ingresar el cuit del cliente y se deberá listar el importe
                a pagar por cada contratación.*/
                break;
            }
            case 8:
            {
                /*Listar contrataciones: ​Se deberán listar las contrataciones indicando nombre de la
                pantalla, nombre de video, cantidad de días y cuit de cliente.*/
                break;
            }
            case 9:
            {
                /*Listar​ ​pantallas:​ ​Se deberán listar las pantallas existentes indicando todos sus campos.*/
                scr_show(screens,100);
                break;
            }
            case 10:
            {
                /*Informar:
                1. Lista de cada cliente con cantidad de contrataciones e importe a pagar por cada una.
                2. Cliente con importe más alto a facturar (si hay más de uno indicar el primero)*/
                break;
            }
        }
    }
    return 0;
}
