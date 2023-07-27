#include "main.h"
/**
 * reverse_array - function that everses the content of an array of integers
 * @a: the array to reverse
 * @n: number of int to swap
 */
void reverse_array(int *a, int n)
{
	int t[100];
	int i;

	for (i = 0; i < n; i++)
	{
		t[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = t[i];
	}
}
