/*********************************************************
 *Crear una función que permita ingresar un numero al usuario y lo retorne. Crear una función que reciba el radio de un círculo y retorne su área.
 *Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule el área de un círculo cuyo radio es ingresado por el usuario.
 *Documentar las funciones al estilo Doxygen.
 **********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float requestFloat(void);
float calculateArea(float radius);

int main()
{
    float valueEntered;
    float area;
    valueEntered=requestFloat();
    area=calculateArea(valueEntered);
    printf("The area of the circle is %f",area);
    return 0;
}
/**
 * \brief Input radius of the circle and output the area
 * \return Area of the circle
 *
 */
float calculateArea(float radius)
{
    return radius*M_PI;
}
/**
 * \brief Request to the user to input the radius of a circle
 * \param Radius of a circle in float
 * \return the number requested to the user
 *
 */
float requestFloat()
{
    float number;
    printf("Please, enter a number: ");
    scanf("%f",&number);
    return number;
}
