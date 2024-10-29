#include "main.h"

/**
 * print_diagonal- imprime caracter en linea nueva estilo diagnal
 *
 * @n: representa el numero de veces
 **/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n ; i++)
		{
			for (j = 0; j <= 1+i; j++)
			{
			_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
		
	}
}
