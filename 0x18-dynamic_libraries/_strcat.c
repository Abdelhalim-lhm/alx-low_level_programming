#include "main.h"
/**
 * *_strcat - function that concatenate 2 strings
 * @dest : first string
 * @src : second string
 * Return: 0 on succes
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
