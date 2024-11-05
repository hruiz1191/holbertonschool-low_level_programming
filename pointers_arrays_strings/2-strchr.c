#include "main.h"
#include <stddef.h>

/**
 * _strchr - copia desde el caracter asignado
 * @s: la fuente de caracteres
 * @c el caracter a identificar
 * Return: devuelve cadena de caracteres
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
