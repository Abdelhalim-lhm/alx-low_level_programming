#include "main.h"
/**
 * print_diagsums -  function that prints the sum
 * of the two diagonals of a square matrix int
 * @a: int to sum
 * @size: size of the diag
 */
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 = d1 + a[i * size + i];
		d2 = d2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", d1, d2);
}
