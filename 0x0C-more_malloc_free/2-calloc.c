#include "main.h"
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array's number of element
 * @size: size of memory allocated
 * Return: pointer to the allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, nmemb * size);
	return (arr);
}
