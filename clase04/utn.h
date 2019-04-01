#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int utn_getNumber(int* pResult,char* msg,char* errorMsg,int min,int max,int attempts);
int utn_isValidInt(char*pString);
int utn_isValidFloat(char*pString);

#endif // UTN_H_INCLUDED
