#include "main.h"

/**
 * _strcpy - copia un array a otro vacio
 * @dest: variable donde van a compiar
 * @src: variable q van a copiar
 * Return: devuelve el caracter copiado
 */
char *_strcpy(char *dest, char *src)
{
	int i, ls;

	ls = 0;

	while (src[ls] != '\0')
	{
		ls++;
	}
	for (i = 0; i <= ls; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}
