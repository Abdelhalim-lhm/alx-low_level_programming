#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that print a charater
 *
 * @c: the charater to print
 *
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
