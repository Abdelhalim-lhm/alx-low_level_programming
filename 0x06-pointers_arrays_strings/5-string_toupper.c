#include "main.h"
/**
 * *string_toupper - function that changes all lowercase letters to uppercase
 * @c: the string to change
 * Return: 0 on success
 */
char *string_toupper(char *c)
{
	int i, n = 0;

	while (c[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		if (c[i] >= 96 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
