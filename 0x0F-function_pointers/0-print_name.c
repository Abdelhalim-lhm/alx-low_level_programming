#include "function_pointers.h"
/**
 * print_name - function that print name
 * @f: pointer to a function
 * @name: name to print
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
