#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s : the string to reverse
 * Return: 0 on succes
 */
void rev_string(char *s)
{
	char t[500];
	int i = 0;
	int j = 0;
	int k = 0;

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
	{
		t[i - j - 1] = s[j];
	}
	t[i] = '\0';
	for (k = 0; k < i; k++)
	{
		s[k] = t[k];
	}
}
