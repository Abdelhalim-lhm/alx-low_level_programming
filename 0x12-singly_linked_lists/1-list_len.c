#include "lists.h"
/**
 * list_len - function that returns
 * the number of elements in a linked list_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	int count = 0;

	while (p != NULL)
	{
		p = p->next;
		count++;
	}
	return (count);
}
