#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: string to check
 * @c: the character we looking for
 * Return: 0 On success
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	return (NULL);
}
