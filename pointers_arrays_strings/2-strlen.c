#include "main.h"
/**
 * _strlen - largo del string
 *
 * @s:  el string a calcular
 * Return: devuelve el largo
 **/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
