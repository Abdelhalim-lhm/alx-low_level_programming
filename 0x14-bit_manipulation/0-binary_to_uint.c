#include "main.h"
/**
 * power - function that claculate the power of a number
 * @n: number base
 * @p: power
 * Return: the power result
 */
unsigned int power(int n, unsigned int p)
{
	unsigned int i, pow = 1;

	if (p == 0)
		return (1);
	for (i = 0; i < p; i++)
	{
		pow = pow * n;
	}
	return (pow);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary string
 * Return: the converted number, or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0 ; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			sum = sum + power(2, strlen(b) - 1 - i);
		}
	}
	return (sum);
}
