#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - imprime desde el numero entrado hasta el 98,
 *
 * @n: el numero donde comieza a sumar o retar hasta llegar .
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
