#include "main.h"

/**
 * _isalpha - function that Returns 1 if c is a lettre lowercase or Uppercase
 * @c: is the charatere to check
 *
 * Return: 0 Succes
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
