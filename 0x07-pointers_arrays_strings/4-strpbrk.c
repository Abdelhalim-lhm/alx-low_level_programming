#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string to check
 * @accept: set of byte to find
 * Return: 0 On success
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n = 0;

	while (accept[n] != '\0')
	{
		n++;
	}
	while (*s != '\0')
	{
		for (i = 0; i < n; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	s++;
	}
	return (NULL);
}
