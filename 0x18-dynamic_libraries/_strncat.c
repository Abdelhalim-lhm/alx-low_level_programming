#include "main.h"
/**
 * *_strncat - function that concatenate 2 strings
 * @dest : first string
 * @src : second string
 * @n : n byte to take from the seconde string
 * Return: 0 on succes
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
