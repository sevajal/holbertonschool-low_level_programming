#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * new_dog -  creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;
	int namelen = _strlen(name);
	int ownerlen = _strlen(owner);
	int i;

	dog2 = malloc(sizeof(*dog2));

	if (dog2 == NULL || !(name) || !(owner))
	{
		free(dog2);
		return (NULL);
	}

	dog2->name = malloc(namelen + 1);
	dog2->owner = malloc(ownerlen + 1);

	if (dog2->name == NULL || dog2->owner == NULL)
	{
		free(dog2->owner);
		free(dog2->name);
		free(dog2);
		return (NULL);
	}

	for (i = 0; i < namelen; i++)
		dog2->name[i] = name[i];
	dog2->name[i] = '\0';

	dog2->age = age;

	for (i = 0; i < ownerlen; i++)
		dog2->owner[i] = owner[i];
	dog2->owner[i] = '\0';

	return (dog2);
}
