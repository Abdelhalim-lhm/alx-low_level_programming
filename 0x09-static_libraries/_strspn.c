#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to check
 * @accept: prefix to find
 * Return: 0 On success
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n = 0, count = 0;

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
				count++;
				break;
			}
		}
		if (i == n)
		{
			break;
		}
	s++;
	}
	return (count);
}
