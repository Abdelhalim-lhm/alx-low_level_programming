#include "main.h"
/**
 * *_strncpy - function that copies string
 * @dest : first string
 * @src : second string
 * @n : n byte to take from the seconde string
 * Return: 0 on succes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
	i++;
	}
	return (dest);
}
