#include "main.h"
/**
 * factorial - busca el factorial
 * @n: caracteres a imprimir
 * Return: numero
 **/
int factorial(int n)
{
	if (n < 0)
		return(-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
