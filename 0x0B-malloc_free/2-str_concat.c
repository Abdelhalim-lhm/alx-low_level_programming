#include "main.h"
/**
 * str_concat - function concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: 0 on success
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, n = 0, m = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	ar = malloc(n + m + 1);
	if (ar == NULL)
	{
		return ("");
	}
	for (i = 0; i < n; i++)
	{
		ar[i] = s1[i];
	}
	for (i = n; i < n + m; i++)
	{
		ar[i] = s2[i - n];
	}
	ar[n + m] = '\0';
	return (ar);
}
