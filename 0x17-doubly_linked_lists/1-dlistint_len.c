#include "lists.h"
/**
 * dlistint_len - function returns the number of elements
 * in a linked dlistint_t list
 * @h: list to take elments from
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
return (count);
}
