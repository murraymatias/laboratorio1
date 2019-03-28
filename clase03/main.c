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
    printf("The area of the circle is %.2f",area);
    return 0;
}
/**
<<<<<<< Updated upstream
 * \brief Input radius of the circle and output the area
 * \return Area of the circle
=======
 * \brief Input radius, output circle area
 * \param Radius of the circle in float
 * \return Area of the circle in float
>>>>>>> Stashed changes
 *
 */
float calculateArea(float radius)
{
    return radius*radius*M_PI;
}
<<<<<<< Updated upstream
/**
 * \brief Request to the user to input the radius of a circle
 * \param Radius of a circle in float
 * \return the number requested to the user
=======

/**
 * \brief Request a number to the user
 * \return User inputed number
>>>>>>> Stashed changes
 *
 */
float requestFloat()
{
    float number;
    printf("Please, enter circle radius: ");
    scanf("%f",&number);
    return number;
}
