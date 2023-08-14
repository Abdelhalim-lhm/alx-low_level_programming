#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Ndog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	Ndog = malloc(sizeof(dog_t));
	if (Ndog == NULL)
	{
		return (NULL);
	}
	Ndog->name = malloc(sizeof(strlen(name) + 1));
	if (Ndog->name == NULL)
	{
		free(Ndog);
		return (NULL);
	}
	Ndog->owner = malloc(sizeof(strlen(owner) + 1));
	if (Ndog->owner == NULL)
	{
		free(Ndog);
		free(Ndog->name);
		return (NULL);
	}
	Ndog->name = strcpy(Ndog->name, name);
	Ndog->age = age;
	Ndog->owner = strcpy(Ndog->owner, owner);
	return (Ndog);
}
