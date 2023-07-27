#include "main.h"
/**
 * *leet - leet function
 * @c: the string to change
 * Return: 0 on success
 */
char *leet(char *c)
{
	int j, i = 0;
	char l[] = "aAeEoOtTlL";
	char t[] = "4433007711";

	while (c[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == l[j])
			{
				c[i] = t[j];
			}
		}
	i++;
	}
	return (c);
}
