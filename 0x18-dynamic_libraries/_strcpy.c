#include "main.h"
/**
 * *_strcpy - function that copy string into another
 * @src : the string to be copied
 * @dest : the copy
 * Return: 0 on succes
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i])
		i++;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
return (dest);
}
