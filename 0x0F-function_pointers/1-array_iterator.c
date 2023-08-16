#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: elment of the array
 * @size: size of the array
 * @action: function to use
 * Retrun: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action || array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
