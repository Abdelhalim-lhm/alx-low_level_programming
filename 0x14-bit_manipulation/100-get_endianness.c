#include "stdio.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int test;

	if (*(char *)&test == 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

