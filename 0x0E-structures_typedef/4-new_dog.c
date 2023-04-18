#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/*
 *dog_t *new_dog(char *name, float age, char *owner);
 *store a copy of name and owner
 *Return NULL if the function fails
 *
 *
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);

	poppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (poppy->name == NULL)
	{
		free(poppy);
		return (NULL);
	}

	poppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (poppy->owner == NULL)
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}

	poppy->name = _strcopy(poppy->name, name);
	poppy->age = age;
	poppy->owner = _strcopy(poppy->owner, owner);

	return (poppy);
}

	
