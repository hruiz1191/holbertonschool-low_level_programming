#include "main.h"
/**
 * _print_rev_recursion - Imprime un string alrevez
 * @s: caracteres a imprimir
 * Return: caracteres impresos
 **/
void _print_rev_recursion(char *s)
{
	
        if (*s)
		{
			_print_rev_recursion(s + 1);
			_putchar(*s);
        }
}
