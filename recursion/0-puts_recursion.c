#include "main.h"
/**
 * _puts_recursion - Imprime un string
 * @s: caracteres a imprimir
 * Return: caracteres impresos
 **/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
