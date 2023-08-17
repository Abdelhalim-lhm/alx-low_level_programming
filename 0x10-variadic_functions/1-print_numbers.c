#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: character to be print between numbers
 * @n: number of arguments to print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (separator == NULL)
			{
				printf("%d", va_arg(ls, int));
			}
			else
			{
				printf("%d%s", va_arg(ls, int), separator);
			}
		}
		else
		{
				printf("%d\n", va_arg(ls, int));
		}
	}
	va_end(ls);
}
