#include "main.h"
#include <string.h>
/**
 * strtow - function that splits a string into words
 * @str: the string to split
 * Return: 0 on success
 */
char **strtow(char *str)
{
	int i, j, k,  count = 0;
	char *st;
	char **out_st;

	if (str == NULL || strcmp(str, "") == 0 || str == ' ')
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
		}
	}
	out_st = (char **)malloc((count + 1) * sizeof(char *));
	if (out_st == NULL)
	{
		return (NULL);
	}
	st = (char *)malloc(count + 1);
	if (st == NULL)
	{
		free(out_st);
		return (NULL);
	}
	*out_st = st;
	i = 0;

	while (*str != '\0')
	{
		if (*str != ' ')
		{
			j = 0;
			while (*str != ' ' && *str != '\0')
			{
				st[j++] = *str;
				str++;
			}
			st[j] = '\0';
			out_st[i++] = st;
			st = (char *)malloc(count + 1);
			if (st == NULL)
			{
				for (k = 0; k < i; k++)
				{
					free(out_st[k]);
				}
			free(out_st);
			return (NULL);
			}
		}
		else
		{
			str++;
		}
	}
	out_st[i] = NULL;
	return (out_st);
}
