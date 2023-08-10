#include "main.h"
#include <string.h>
/**
 * array_range - function that creates an array of integers
 * @min: min range of the array
 * @max: max range of the array
 * Return: pointer to the allocate memory
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
