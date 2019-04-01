#include <stdio.h>
#include <string.h>

int utn_getNumber(int* pResult,char* msg,char* errorMsg,int min,int max,int attempts)
{
    int ret=-1;
    float number;

    while(attempts>0)
    {
        printf(msg);
        scanf("%f",&number);
        if(number>=min&&number<=max)
        {
            *pResult=number;
            ret=0;
            break;
        }
        else
        {
            printf(errorMsg);
        }
        fflush(stdin);
        attempts--;
    }
    return ret;
}

int utn_isValidInt(char*pString)
{
    int ret=-1;
    int i=0;
    if(pString!=NULL)
    {
        while(pString[i]!='\0')
        {
            if(pString[i]<'0' || pString[i]>'9')
                break;
            i++;
        }
        if(pString[i]=='\0')
            ret=1;
    }
    return ret;
}

int utn_isValidFloat(char*pString)
{
    int ret=-1;
    int i=0;
    //int floatCounter=0;
    if(pString!=NULL)
    {
        while(pString[i]!='\0')
        {
            //if(pString)
            if(pString[i]<'0'||pString[i]>'9'||strcmp(pString[i],".")==0)
                break;
            i++;
        }
        if(pString[i]=='\0')
            ret=1;
    }
    return ret;
}

