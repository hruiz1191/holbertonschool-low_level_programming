#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - nuevo Perro
 * @name: Nombre de perroe
 * @age: edad del perro
 * @owner: nombre de perro
 * Return: devuevve un puntero para perro nuevo
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogie;
	int i, j, k;
	char *cn, *co;

	dogie = malloc(sizeof(struct dog));
	if (dogie == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	cn = malloc(sizeof(char) * i + 1);
	if (cn == NULL)
	{
		free(dogie);
		return (NULL);
	}

	co = malloc(sizeof(char) * j + 1);
	if (co == NULL)
	{
		free(n);
		free(dogie);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		cn[k] = name[k];
	for (k = 0; k <= j; k++)
		co[k] = owner[k];

	dogie->name = cn;
	dogie->age = age;
	dogie->owner = co;

	return (dogie);
}
