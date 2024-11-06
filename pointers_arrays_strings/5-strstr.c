#include <stdio.h>
#include "main.h"
/**
 * _strstr - Busca caracteres exactos dentro de una linea de caracteres
 * @haystack: linea de caracteres
 * @needle: caracter o caracteres deseados
 * Return: si encuentra caracteres de needle los devuelve.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
