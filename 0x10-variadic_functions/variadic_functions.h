#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_string(va_list);
void print_float(va_list);
void print_int(va_list);
void print_char(va_list);
/**
 * struct type - Struct type
 *
 * @type: The type of the input
 * @f: The function associated
 */
typedef struct type
{
	char *type;
	void (*f)(va_list);
} type_f;
#endif
