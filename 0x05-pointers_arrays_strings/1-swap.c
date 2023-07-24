#include "main.h"
/**
 * swap_int - function that swap 2 integer
 * @a : the first int
 * @b : the seconde int
 * Return: 0 on succes
 */
void swap_int(int *a, int *b)
{
	int s = 0;
	s = *a;
	*a = *b;
	*b = s;
}
