#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define LIST_LEN 100

int searchName(char *pName, char list[][64],int len, int *pIndex);
int searchFree(int *pIndex,char pArray[][64],int max);

int main()
{
    int option;
    char names[LIST_LEN][64];
    //char buffer[64];
    int i;
    for(i=0;i<LIST_LEN;i++)
    {
        names[i][0]='\0';
    }
    names[0][0]='A';
    names[1][0]='b';
    while(1)
    {
        getNumber(  &option,
                    "1) ingresar nuevo nombre\n2) listar todo\n3) ordenar por nombre\n4) Borrar nombre\n",
                    "Error\n",
                    1,4,10);
        printf("Elegiste %d\n",option);
        switch(option)
        {
            case 1:
            {
                break;
            }
            case 2:
            {
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                break;
            }
        }
    }

    return 0;
}

int searchFree(int *pIndex,char pList[][64],int len)
{
    int ret=-1;
    int i;
    for(i=0;i<len;i++)
    {
        if(pList[i][0]=='\0')
        {
            *pIndex=i;
            ret=0;
            break;
        }
    }
    return ret;
}

int searchName(char *pName, char list[][64],int len, int *pIndex)
{
    int ret=-1;
    int i;
    for(i=0;i<len;i++)
    {
        if(strcmp(pName,list[i])==0)
        {
            *pIndex=i;
            ret=0;
            break;
        }
    }
    return ret;
}
