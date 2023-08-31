#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number to change
 * @index: position of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > 63)
		return (-1);
	temp = 1 << index;
	temp = ~temp;
	*n = *n & temp;
	return (1);
}
