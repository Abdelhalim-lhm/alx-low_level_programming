#include "main.h"
/**
 * print_array - function that print an array
 * @a : the array to print
 * @n : lenght of the array
 * Return: 0 on succes
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j < n - 1)
		{
			printf("%d, ", a[j]);
		}
		else
		{
			printf("%d\n", a[j]);
		}
	}
}
