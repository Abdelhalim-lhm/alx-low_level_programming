#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: list head
 * @index: the node position
 * Return: the node in the index position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (pos == index)
		{
			return (head);
		}
		else
		{
			head = head->next;
			pos++;
		}
	}
	return (NULL);
}
