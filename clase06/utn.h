#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int utn_isInt(char* cadena);
int utn_isFloat(char* string);
int utn_getInt(int* pResultado);
int unt_getFloat(float*pResult);
int utn_getNumber(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_getArrayInt(int*pArrayResultados,int limite,char *mensaje,char *mensajeError,int minimo,int maximo,int reintentos);
int calcularPromedio(float*pResultado,int desde,int hasta,int*pArrayInt);
int utn_swapInt(int*a,int*b);
int swapFloat(float*a,float*b);
int bubbleSortInt(int*pArray,int limite);
int utn_isInArrayInt(int*pArray,int limit,int value);
int utn_printArrayInt(int*pArray,int limit);

#endif // UTN_H_INCLUDED
