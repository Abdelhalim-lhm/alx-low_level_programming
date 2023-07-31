#include "main.h"
/**
 * *_memset - function that fills memory
 * @s: character to fill
 * @b: character to be change with
 * @n: size of memory the change
 * Return: 0 On success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
