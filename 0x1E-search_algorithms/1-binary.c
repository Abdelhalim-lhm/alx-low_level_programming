#include "search_algos.h"
/**
 * binary_search - Binary search function
 * @array: array to search in
 * @size:size of the array
 * @value: value to look for
 * Return: index on succes else retrun -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;

		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf(" %ld", i);
			else
				printf(" %ld,", i);
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
