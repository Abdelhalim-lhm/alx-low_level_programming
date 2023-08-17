#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: character to be print between strings
 * @n: number of arguments to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;
	char *tmp;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%s%s", (tmp = va_arg(ls, char *)) ? tmp : "nil",
				       separator ? separator : "");
		}
		else
		{
			printf("%s\n", (tmp =va_arg(ls, char *)) ? tmp : "nil");
		}
	}
	va_end(ls);
}
