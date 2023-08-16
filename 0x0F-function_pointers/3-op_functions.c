#include "calc.h"
/**
 * op_add - function that add two integers
 * @a: first int
 * @b: second in
 * Return: the result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that subtract two integers
 * @a: first int
 * @b: second in
 * Return: the result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiply two integers
 * @a: first int
 * @b: second in
 * Return: the result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divise two integers
 * @a: first int
 * @b: second in
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
/**
 * op_mod - function that modulo two integers
 * @a: first int
 * @b: second in
 * Return: the result of the modulation
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
