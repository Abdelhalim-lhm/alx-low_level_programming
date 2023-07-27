#include "main.h"
/**
 * *cap_string - function that capitalize letter after some symboles
 * @c: the string to change
 * Return: 0 on success
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 96 && c[i] <= 122)
		{
			if (c[i - 1] == ' ' || c[i - 1] == '.'
				|| c[i - 1] == '!' || c[i - 1] == '\n' || c[i - 1] == '\t')
			{
				c[i] = c[i] - 32;
			}
			if (c[i - 1] == '(' || c[i - 1] == ')'
				|| c[i - 1] == '{' || c[i - 1] == '}')
			{
				c[i] = c[i] - 32;
			}
			if (c[i - 1] == ',' || c[i - 1] == ';'
				|| c[i - 1] == '?' || c[i - 1] == '"')
			{
				c[i] = c[i] - 32;
			}
		}
		i++;
	}
	return (c);
}
