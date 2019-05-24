#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "persona.h"
#include "utn.h"

Persona* per_new(void)
{
    return (Persona*)malloc(sizeof(Persona));
}

Persona* per_newParams(int id, char* nombre, char* apellido,int edad)
{
    Persona* aux;
    aux=per_new();
    if(aux!=NULL)
    {
    per_setId(aux,id);
    per_setNombre(aux,nombre);
    per_setApellido(aux,apellido);
    per_setEdad(aux,edad);
    }
    return aux;
}

int per_init(Persona** array, int len)
{
    int i;
    int ret= -1;
    if(array!=NULL)
    {
        for(i=0;i<len;i++)
        {
            *(array+i)=NULL;
        }
        ret=0;
    }
    return ret;
}

int per_delete(Persona* this)
{
    int ret=-1;
    if(this!=NULL)
    {
        free(this);
        ret=0;
    }
    return ret;
}

int per_setId(Persona* this,int id)
{
    int ret=-1;
    if(this!=NULL)
    {
        this->id=id;
        ret=0;
    }
    return ret;
}

int per_setNombre(Persona* this,char* nombre)
{
    int ret=-1;
    if(this!=NULL)
    {
        strncpy(this->nombre,nombre,sizeof(this->nombre));
        ret=0;
    }
    return ret;
}

int per_setApellido(Persona* this,char* apellido)
{
    int ret=-1;
    if(this!=NULL)
    {
        strncpy(this->apellido,apellido,sizeof(this->apellido));
        ret=0;
    }
    return ret;
}

int per_setEdad(Persona* this,int edad)
{
    int ret=-1;
    if(this!=NULL)
    {
        this->edad=edad;
        ret=0;
    }
    return ret;
}

int per_getId(Persona* this,int* id)
{
    int ret=-1;
    if(this!=NULL&&id!=NULL)
    {
        *id=this->id;
        ret=0;
    }
    return ret;
}

int per_getNombre(Persona* this, char* nombre)
{
    int ret=-1;
    if(this!=NULL&&nombre!=NULL)
    {
        strncpy(nombre,this->nombre,sizeof(this->nombre));
        ret=0;
    }
    return ret;
}
int per_getApellido(Persona* this,char* apellido)
{
    int ret=-1;
    if(this!=NULL&&apellido!=NULL)
    {
        strncpy(apellido,this->apellido,sizeof(this->apellido));
        ret=0;
    }
    return ret;
}

int per_getEdad(Persona* this,int* edad)
{
    int ret=-1;
    if(this!=NULL&&edad!=NULL)
    {
        *edad=this->edad;
        ret=0;
    }
    return ret;
}

int per_getFree(Persona** list,int len)
{
    int i;
    int ret= -1;
    if(list!=NULL&&len>=0)
    {
        for(i=0;i<len;i++)
        {
            if(*(list+i)==NULL)
            {
                ret=i;
                break;
            }
        }
    }
    return ret;
}

int per_create(Persona** list,int len)
{
    int ret= -1;
    Persona* auxPersona;
    int freePos;
    int auxId;
    int auxEdad;
    char auxName[32];
    char auxLastname[32];

    if(!utn_getInt(&auxId,"Ingrese ID: ","Error",0,INT_MAX,10)&&
        !utn_getString(auxName,"Ingrese nombre: ","Error",1,31,10)&&
        !utn_getString(auxLastname,"ingrese apellido: ","Error",1,31,10)&&
        !utn_getInt(&auxEdad,"Ingrese edad: ","Error",INT_MIN,INT_MAX,10))
    {
        auxPersona=per_newParams(auxId,auxName,auxLastname,auxEdad);
        if(auxPersona!=NULL)
        {
            freePos=per_getFree(list,len);
            if(freePos>=0)
            {
                *(list+freePos)=auxPersona;
                ret=0;
            }
        }
    }
    return ret;
}
