#include "main.h"
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of elment to take from s2
 * Return: 0 on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	str = malloc(strlen(s1) + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		str[i] = s1[i];
	}
	for (i = strlen(s1); i < strlen(s1) + n; i++)
	{
		str[i] = s2[i - strlen(s1)];
	}
	str[strlen(s1) + n] = '\0';
	return (str);
}
