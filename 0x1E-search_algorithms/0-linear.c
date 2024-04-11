#include "search_algos.h"
/**
 * linear_search - Linear search function
 * @array: array to search in
 * @size:size of the array
 * @value: value to look for
 * Return: index on succes else retrun -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
