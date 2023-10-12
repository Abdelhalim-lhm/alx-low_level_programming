#include "lists.h"
/**
 * get_dnodeint_at_index -  function that returns the nth node
 * of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the node
 * Return: the node of the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current != NULL)
	{
		count++;
		if (count == index)
		{
			return (current->next);
		}
		current = current->next;
	}
	return (NULL);
}
