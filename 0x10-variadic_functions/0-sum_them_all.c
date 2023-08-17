#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of argument to sum
 * Return: sum of the n argument
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i, sum = 0;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ls, unsigned int);
	}
	va_end(ls);
	return (sum);
}
