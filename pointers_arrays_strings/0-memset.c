#include <stdio.h>
#include "main.h"
/**
 * memset - cambia memoria de un puntero por un caracter especifico
 * @s: puntero a modificar
 * @b: variable a incluir
 * @n: numero de repeticiones deseadas
 * Return: puntero devuelto con la modificacion.
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
	s[i] = b;
	}

	return (s);
}
