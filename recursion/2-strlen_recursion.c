#include "main.h"
/**
 * _strlen_recursion - Imprime un string
 * @s: caracteres a imprimir
 * Return: numero de caracteres
 **/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
