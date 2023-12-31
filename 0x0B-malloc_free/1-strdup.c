#include "main.h"
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: 0 on success
 */
char *_strdup(char *str)
{
	char *ar;
	int i, n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	ar = malloc(n + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		ar[i] = str[i];
	}
	ar[n] = '\0';
	return (ar);
}
