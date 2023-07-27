#include "main.h"
/**
 * *rot13 - rot13 function
 * @c: the string to change
 * Return: 0 on success
 */
char *rot13(char *c)
{
	int j, i = 0;
	char l[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char t[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	while (c[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == l[j])
			{
				c[i] = t[j];
				break;
			}
		}
	i++;
	}
	return (c);
}
