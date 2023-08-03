#include "main.h"
/**
 * is_prime - function that checks if prime
 * @n: the base number
 * @d: number to check with
 * Return: 0 on success
 */
int is_prime(int n, int d)
{
	if (d <= 1)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (is_prime(n, d - 1));
}
/**
 * is_prime_number - function that returns
 * 1 if the input integer is a prime number, otherwise return 0
 * @n: the base number
 * Return: 0 on success
 */
int is_prime_number(int n)
{

	if (n <= 2)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, n - 1));
	}

}
