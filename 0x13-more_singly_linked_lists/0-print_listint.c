#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	int count = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}
	return (count);
}
