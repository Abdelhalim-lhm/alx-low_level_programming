#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that print a character
 * @c: the charater to print
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
