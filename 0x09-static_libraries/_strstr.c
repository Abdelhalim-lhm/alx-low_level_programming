#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: string to check
 * @needle: set of byte to find
 * Return: 0 On success
 */
char *_strstr(char *haystack, char *needle)
{
	int i, n = 0;

	while (needle[n] != '\0')
	{
		n++;
	}
	while (*haystack != '\0')
	{
		int j = 0;

		for (i = 0; i < n; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		j++;
		}
		if (j == n)
		{
			return (haystack);
		}
		if (haystack[i] == '\0')
		{
			return (NULL);
		}
	haystack++;
	}
	return (NULL);
}
