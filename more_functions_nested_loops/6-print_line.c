#include "main.h"
/**
 * print_line - imprime una linea utilizando _
 *
 * @n: indica el largo de lineas
 */

void print_line(int n)
{
	int i;

		if (n <= 0)
			_putchar('\n');
		else
		{
			for (i = 0; i <= n; i++)
			_putchar(95);
		_putchar('\n');
		}
}
