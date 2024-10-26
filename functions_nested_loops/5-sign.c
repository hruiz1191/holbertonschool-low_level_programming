#include "main.h"
/**
 * print_sign - coloca simbolo + o _  de number
 *
 * @n: Variable que se va a comparar
 *
 * Return: devuelve 1 si es letra  0 si es otro caracter
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else  if  (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

