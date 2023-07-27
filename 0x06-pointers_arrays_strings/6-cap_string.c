#include "main.h"
/**
 * *cap_string - function that capitalize letter after some symboles
 * @c: the string to change
 * Return: 0 on success
 */
char *cap_string(char *c)
{
	int i, n = 0;

	while (c[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		if (c[i] == ' ' || c[i] == '.' || c[i] == '\t')
		{
			if (c[i + 1] >= 96 && c[i + 1] <= 122)
			{
				c[i + 1] = c[i + 1] - 32;
			}
		}
		if (c[i] == '\\')
		{
			putchar('\n');
		}
		if (c[i] == '\t')
		{
			c[i] = ' ';
		}
	}
	return (c);
}
