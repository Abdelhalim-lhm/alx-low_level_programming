#include "main.h"

/**
 * _islower - function that Returns 1 if c is lowercase
 * @c: is the charatere to check
 *
 * Return: 0 Succes
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
