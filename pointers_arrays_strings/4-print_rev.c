#include "main.h"

/**
 * print_rev - imprime alreves
 *
 * @s: palabra a cambiar el orden
 **/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	while (i > 0)
	{
		--i;
		_putchar(s[i]);
	}
	_putchar('\n');
}
