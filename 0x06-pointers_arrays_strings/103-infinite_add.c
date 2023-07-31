#include <stdio.h>
/**
 * *infinite_add - function that adds 2 numbers
 * @n1: first number
 * @n2: second number
 * @r: result of the sum
 * @size_r: the size of r
 * Return: 0 on succes
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int k, i = 0; int j = 0;

        while (n1[i] != '\0')
        {
                i++;
        }
        while (n2[j] != '\0')
        {
                j++;
        }
        if (i >= j)
        {
                if (size_r < i)
                {
                        return(0);
                }
                else
                {
                        for (k = i - 1; k >= 0; k--)
                        {
                                r[k] = (n1[k] - '0') + (n2[k] - '0') + '0';
                        }
                }
        }
        else
        {
                if (size_r < j)
                {
                        return(0);
                }
                else
                {
                        for (k = j - 1; k >= 0; k--)
                        {
                                r[k] = (n1[k] - '0') + (n2[k] - '0') + '0';
                        }

                }
        }
        return (r);
}
