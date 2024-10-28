#include "main.h"
/**
 * print_most_numbers - imprime del 0 al 9 menos el 2 y el 4
 *
 **/

void print_most_numbers(void)
{
	int i = 0;

	for ( ; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			i++;
		_putchar(i + '0');
	}

			_putchar('\n');
}
