#include "variadic_functions.h"
/**
 * print_string - function that print string
 * @ls: variadic list
 * Return: nothing
 */
void print_string(va_list ls)
{
	char *str = va_arg(ls, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
}
/**
 * print_float - function that print float
 * @ls: variadic list
 * Return: nothing
 */
void print_float(va_list ls)
{
	printf("%f", va_arg(ls, double));
}
/**
 * print_int - function that print integer
 * @ls: variadic list
 * Return: nothing
 */
void print_int(va_list ls)
{
	printf("%d", va_arg(ls, int));
}
/**
 * print_char - function that print a charater
 * @ls: variadic list
 * Return: nothing
 */
void print_char(va_list ls)
{
	printf("%c", va_arg(ls, int));
}
/**
 * print_all - function that print 4 type of format
 * @format: the format character
 * Return :nothing
 */
void print_all(const char * const format, ...)
{
	type_f frm[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
		};
	va_list ls;
	int j, i = 0;

	va_start(ls, format);

	while (format && format[i])
	{
		j = 0;

		while (frm[j].type)
		{
			if (format[i] == frm[j].type[0])
			{
				frm[j].f(ls);
				printf(format[i + 1] ? ", ": "");
			}
		j++;
		}
	i++;
	}
	printf("\n");
	va_end(ls);
}
