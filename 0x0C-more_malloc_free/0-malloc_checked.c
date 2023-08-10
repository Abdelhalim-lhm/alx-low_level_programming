#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the zize of memory to allocate
 * Return: pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *memo = malloc(b);

	if (memo == NULL)
	{
		exit(98);
	}
	return (memo);
}
