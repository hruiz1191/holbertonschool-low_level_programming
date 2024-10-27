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
	int md, mu, hd, hu;

	for (hd = 0; hd <= 2; hd++)
	{
		for (hu = 0; hu < 9; hu++)
		{
			if ((hd <= 1 && hu <= 9)||(md <= 2 && mu <= 3))
				{
					for (md = 0; md <= 5; md++)
					{
						for (mu = 0; mu <= 9; mu++)
						{
							_putchar(hd + '0');
							_putchar(hu + '0');
							_putchar(':');
							_putchar(md + '0');
							_putchar(mu + '0');
							_putchar('\n');
						}
					}
				}
		}
	}

}

