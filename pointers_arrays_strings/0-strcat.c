#include "main.h"
/**
 *_strcat - une 2 string de caracteres
 *@dest: caracteres q se se modifica
 *@src: caracter que se anade
 *Return: Devuelve el caracter
 **/

char *_strcat(char *dest, char *src)
{
	int i;
		int j;

		for (i = 0; dest[i] != '\0'; i++)
		{}
		j = 0;
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (dest);
}

