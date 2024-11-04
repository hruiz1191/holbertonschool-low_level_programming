#include "main.h"
/**
 * _memcpy - copia de un lugar a otro
 * @dest: donde se va a copiar
 * @src: la fuente
 * @n: cantidad de caracteres a copiar
 * Return: devuelve el destino
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	return (dest);
}
