#include "lists.h"
/**
 * listint_len - function that prints all the elements of a listint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	int count = 0;

	while (p != NULL)
	{
		p = p->next;
		count++;
	}
	return (count);
}
