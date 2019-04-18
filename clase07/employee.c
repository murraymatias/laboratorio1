#include <stdio.h>
#include "utn.h"
#include "employee.h"

void employee_init(Employee employees[],int max)
{
    int i;
    for(i=0;i<max;i++)
    {
        employees.isEmpty[i]=1;
    }
    return;
}

void employee_show(Employee employees,int max)
{
    int i;
    for(i=0;i<max;i++)
    {
        printf("Id: %d\nName: %s\n")
    }
}
