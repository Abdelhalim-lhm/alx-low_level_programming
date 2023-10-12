#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: node to add
 * @idx: position of the node
 * @n: data of the node
 * Return: adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t *));
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (count == idx)
		{
			new_node->prev = current->prev;
			new_node->next = current;
			if (current->prev != NULL)
				current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
