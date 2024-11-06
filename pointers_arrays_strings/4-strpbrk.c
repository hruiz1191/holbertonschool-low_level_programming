#include "main.h"
/**
 * _strpbrk - identifica una primera letra
 * @s: caracter entrado
 * @accept: caracteres deseados
 * Return: devuelve caracteres restantes del string
 **/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}

