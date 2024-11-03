#include "main.h"
/**
 * string_toupper - cambia el string de minuscula a mayuscula
 *
 * @palabra palabra a cambia caracteres
 *
 * Return: regrasa la palabra e mayuscula
 */
char *string_toupper(char *palabra)
{
	int i = 0;
	int cambiar = 'a' - 'A';

	for (i = 0; palabra[i] != '\0'; ++i)
	{
		if (palabra[i] >= 'a' && palabra[i] <= 'z')
		{
			palabra[i] = palabra[i] - cambiar;
		}
	}
	return (palabra);
}
