#include "main.h"
#include <string.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory to reallocate
 * @old_size: size of ptr
 * @new_size: size of the new pointer
 * Return: pointer to the allocate memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	memcpy(new_ptr, ptr, old_size > new_size ? new_size : old_size);
	free(ptr);
	return (new_ptr);
}
