#include "main.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: the base number
 * @y: the power number
 * Return: 0 on success
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
