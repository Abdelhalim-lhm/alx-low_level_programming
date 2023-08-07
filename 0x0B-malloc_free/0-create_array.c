#include "main.h"
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: initialisation character
 * Return: 0 on success
 */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
