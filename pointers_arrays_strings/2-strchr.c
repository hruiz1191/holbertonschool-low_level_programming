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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == c)
			return (s + i);
	}
	return(NULL);
}

