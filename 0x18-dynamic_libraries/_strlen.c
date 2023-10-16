#include "main.h"
/**
 * _strlen - function that gives the lenght of a string
 * @s : the character
 * Return: 0 on succes
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
return (i);
}
