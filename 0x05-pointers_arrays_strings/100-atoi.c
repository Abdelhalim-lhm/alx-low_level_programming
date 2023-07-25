#include "main.h"
/**
 * _atoi - function that convert string to integer
 * @s: the string to convert
 * Return: 0 on succes
 */
int _atoi(char *s)
{

	int sign = 1;
	unsigned int n = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
		{
		break;
		}
	s++;
	}
	return (n * sign);
}
