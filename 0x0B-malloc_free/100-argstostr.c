#include "main.h"
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: argument value
 * Return: 0 on success
 */
char *argstostr(int ac, char **av)
{
	int i, j, lt;
	char *st = malloc(ac * sizeof(*av));
	char *out_st;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		lt = lt + strlen(av[i]);
	}
	st = malloc((lt + ac - 1) * sizeof(char));
	out_st = st;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*st = av[i][j];
			st++;
		}
		*st = '\n';
		st++;
	}
	return (out_st);
}
