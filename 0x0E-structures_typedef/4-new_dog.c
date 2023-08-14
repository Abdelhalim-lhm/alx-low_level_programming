#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that gives the length of a string
 * @str: the string to calculate
 * Return: 0 on success
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - function that copy the first string into the second
 * @str1: the first string
 * @str2: the second string
 * Return: 0 on success
 */
char *_strcpy(char *str1, char *str2)
{
	int i;

	for (i = 0; i < _strlen(str1); i++)
	{
		str2[i] = str1[i];
	}
	return (str2);
}
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
		return (NULL);
	Ndog = (dog_t *)malloc(sizeof(dog_t));
	if (Ndog == NULL)
		return (NULL);
	Ndog->name = malloc(sizeof(char) * (_strlen(name)));
	if (Ndog->name == NULL)
	{
		free(Ndog);
		return (NULL);
	}
	Ndog->name = _strcpy(Ndog->name, name);
	Ndog->owner = malloc(sizeof(char) * (_strlen(owner)));
	if (Ndog->owner == NULL)
	{
		free(Ndog->name);
		free(Ndog);
		return (NULL);
	}
	Ndog->owner = _strcpy(Ndog->owner, owner);
	Ndog->age = age;
	return (Ndog);
}
