#include "main.h"
/**
 * _find_root - function that looks for the root
 * @n: the base number
 * @s: start point to check
 * Return: 0 on success
 */
int _find_root(int n, int s)
{
	if ((s * s) == n)
	{
		return (s);
	}
	if ((s * s) > n)
	{
		return (-1);
	}
	else
	{
		return (_find_root(n, s + 1));
	}
}
/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: the base number
 * Return: 0 on success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_find_root(n, 0));
	}

}
