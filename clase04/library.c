#include <stdio.h>

void test(void)
{
    printf("test function.");
}

int getNumber(int*pResult,int chances,int max, int min,char*msg,char*errorMsj)
{
    int number;
    int ret=-1;
    int attempts=0;

    while(attempts<chances)
    {
        printf(msg);
        scanf("%d",&number);
        if(number<max&&number>min)
        {
            *pResult=number;
            ret=0;
            break;
        }
        else
        {
            printf(errorMsj);
        }
        attempts++;
    }

    return ret;
}
