#include "main.h"
/**
 *_strncat - copia un numero especifico de caracteres
 *@src: varieble original
 *@dest: variable contenido a crear
 *@n: numero de caracteres especificos a copiar
 *Return: caracteres a devolver
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0 ; dest[i] != '\0'; i++)
	{}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
