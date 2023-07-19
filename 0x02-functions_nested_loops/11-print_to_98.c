#include "main.h"
/**
 * print_to_98  - a function that print number from n to 98
 * @n: initial number
 * Return: 0 On success
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%i, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("\n");
}
