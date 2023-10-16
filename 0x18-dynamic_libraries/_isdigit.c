#include "main.h"

/**
 * _isdigit - check if the entry is a digit
 *@c : is the charater to test
 * Return: 1 if upper. 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
