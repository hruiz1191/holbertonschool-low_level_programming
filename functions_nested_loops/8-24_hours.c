#include "main.h"

/**
 * jack_bauer - muestra en tiempo de 24 horas en minutos.
 *
 * @m minutos
 * @h hora
 *
 */

void jack_bauer(void)
{
	int m, h;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m < 59; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}

