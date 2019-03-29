#include <stdio.h>

void test(void)
{
    printf("test function.");
}

int getNumber(int*pResult,int chances,int max, int min,char*pMsg,char*pErrorMsj)
{
    int number;
    //int ret=-1;
    int attempts=0;

    printf("%s",pMsg);
    scanf("%d",&number);

    while((number<min||number>max)&&attempts<chances)
    {
        printf("%s",pErrorMsj);
        scanf("%d",&number);
        attempts++;
    }
    *pResult=number;

    return 0;
}
