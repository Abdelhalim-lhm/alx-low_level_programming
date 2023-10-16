#include "main.h"

/**
 * _abs - function that Returns the absulut value of an integer
 *@n :is the number to check
 * Return: 0 Succes
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
