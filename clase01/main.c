#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_REP 3

int pedirSumarMostrar();
int pedirAcumularMostrar();

int main()
{
    if(!pedirAcumularMostrar())
    {
        printf("\nLa operacion se completo correctamente");
    }
    return 0;
  /*  if(!pedirSumarMostrar())
    {
        printf("\nLa operacion se completo correctamente");
    }
    return 0;*/
}
int pedirAcumularMostrar()
{
    int numeroAcumulado=0;
    int valorIngresado;
    //float promedio; no tiene sentido usar memoria para un valor que no se va a seguir utilizando.
    int i;
    for(i=0;i<CANTIDAD_REP;i++)
    {
        printf("Ingrese un numero %d: ",i+1);
        scanf("%d",&valorIngresado);
        //FALTA VALIDAR
        numeroAcumulado+=valorIngresado;
    }
    //promedio=numeroAcumulado/CANTIDAD_REP;
    printf("El promedio de los numeros es: %.2f",(float)numeroAcumulado/CANTIDAD_REP);
    return 0;
}

int pedirSumarMostrar()
{
    float primerNumero;
    float segundoNumero;
    float resultado;

    printf("Ingrese el primer numero a sumar: ");
    scanf("%f",&primerNumero);
    printf("Ingrese el segundo numero a sumar: ");
    scanf("%f",&segundoNumero);
    resultado=primerNumero+segundoNumero;
    printf("El resultado es: %.2f",resultado);
    return 0;
}
