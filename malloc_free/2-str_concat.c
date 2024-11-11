#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - une a 2 string
 * @s1: source 1
 * @s2: source 2
 **/
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, k, t, p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[i] != '\0'; j++)
	{}

	t = i + j;
	
	c = malloc(t * sizeof(*c) + 1);
	if (c == NULL)
		return(NULL);

	for (k = 0; k < t; k++)
	{
		if(p == 1)
		{
			while (s1[k] == '\0')
			{
				c[k] = s1[k];
			}
				p = 2;
		}
		else if(p == 2)
			while (s2[k] == '\0')
				c[k] = s2[k];
		else
			 c[k + 1] = s2[k + 1];
	}
	return (c);
}










