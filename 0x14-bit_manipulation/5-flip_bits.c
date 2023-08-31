#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first number
 * @m: seconde number
 * Return: numbre of lips to do
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0, count = 0;

	while (i < 64)
	{
		if (((n >> i) ^ (m >> i)) & 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}
