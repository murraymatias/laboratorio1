/*********************************************************
 *Crear una función que permita ingresar un numero al usuario y lo retorne. Crear una función que reciba el radio de un círculo y retorne su área.
 *Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule el área de un círculo cuyo radio es ingresado por el usuario.
 *Documentar las funciones al estilo Doxygen.
 **********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculateArea(float radius);
float requestFloat(void);

int main()
{
    float valueEntered;
    float area;
    valueEntered=requestFloat();
    area=calculateArea(valueEntered);
    printf("The area of the circle is %f",area);
    return 0;
}

float calculateArea(float radius)
{
    return radius*M_PI;
}

float requestFloat()
{
    float number;
    printf("Please, enter a number: ");
    scanf("%f",&number);
    return number;
}
