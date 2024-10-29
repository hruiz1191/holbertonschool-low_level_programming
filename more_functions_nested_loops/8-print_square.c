#include "main.h"
/**
 * print_square- imprime cuadro de caracteres
 *
 * @size: indica a dimension del cuadro
 *
 **/
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= size - 1; i++)
		{
		for (j = 0; j <= size - 1; j++)
		{
		_putchar(92);
		}
		_putchar('\n');
		}
	}

}
