#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	int count = 0;

	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
			p = p->next;
			count++;
		}
		else
		{
		printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		count++;
		}
	}
	return (count);
}
