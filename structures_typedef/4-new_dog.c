#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * _strdub  - duplica el string
 * @str: pointer to duplicar
 *
 * Return: the pointer to str
 *
 */
char *_strdub(char *str)
{
	char *res = NULL;
	int i = 0;

	if (str != NULL)
	{
		res = malloc(_strlen(str) + 1);
		if (res != NULL)
		{
		for (i = 0; i <= _strlen(str); i++)
			res[i] = str[i];
		}
	}
	return (res);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = NULL;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		new_d->name = _strdub(name);
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}

	new_d->owner = _strdub(owner);
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	new_d->age = age;
	}
	return (new_d);
}
