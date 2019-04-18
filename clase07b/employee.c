#include <stdio.h>
#include "utn.h"
#include "employee.h"

void employee_init(Employee employees[],int max)
{
    int i;
    for(i=0;i<max;i++)
    {
        employees[i].isEmpty=1;
    }
    return;
}

void employee_show(Employee employees[],int max)
{
    int i;
    for(i=0;i<max;i++)
    {
        printf("Id: %d\nName: %s\nLastname: %s",employees[i].idEmployee,
                                                employees[i].name,
                                                employees[i].lastname);
    }
    return;
}
int employee_searchFree(int *pIndex,Employee employees[],int max)
{
    int ret=-1;
    int i;
    for(i=0;i<max;i++)
    {
        if(employees[i].isEmpty==1)
        {
            *pIndex=i;
            ret=0;
            break;
        }
    }
    return ret;
}
