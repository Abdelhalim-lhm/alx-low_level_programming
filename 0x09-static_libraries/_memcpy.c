#include "main.h"
/**
 * *_memcpy - function that copies n byte of memory into another memory
 * @dest: destination to copy in
 * @src: memory to copy
 * @n: size of memory tp copy
 * Return: 0 On success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
