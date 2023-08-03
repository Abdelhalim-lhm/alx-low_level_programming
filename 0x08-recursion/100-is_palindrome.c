#include "main.h"
/**
 * is_pal - function that checks equality
 * @s: string to check
 * @i: index to check
 * @n: lenght of the string
 * Return: 0 on success
 */
int is_pal(char *s, int i, int n)
{
	if (i >= n)
	{
		return (1);
	}

	if (s[i] == s[n])
	{
		return (is_pal(s, i + 1, n - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: string to check
 * Return: 0 on success
 */
int is_palindrome(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (is_pal(s, 0, n - 1));
	}
}
