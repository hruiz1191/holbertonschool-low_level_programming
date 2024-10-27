#include "main.h"
/**
 * print_last_digit- imprime el ultimo digito de un numero entrado
 *
 * @n: numero entrado
 *
 * Return: Devuelve el ultimo_digito del numero
 **/
int print_last_digit(int n)
{
	int ultimo_digito;

	ultimo_digito = n  % 10;

	if (ultimo_digito < 0)
		ultimo_digito = ultimo_digito * -1;

	_putchar(ultimo_digito + '0');
	return (ultimo_digito);
}
