#include "main.h"
/**
 * * _abs - calcula el valor absoluto
 *
 * @n: el numero a calcular
 *
 * Return:  devuelve el valor absoluto
 **/
int _abs(int n)
{
	int valor_absoluto;

	if (n < 0)
	{
		valor_absoluto = n * -1;
		return (valor_absoluto);
	}
	return (n);
}
