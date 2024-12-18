#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copia el contenido de un puntero a otro
 * @str: caracteres a copiar
 * Return: return 0
 **/

char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{}

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}

