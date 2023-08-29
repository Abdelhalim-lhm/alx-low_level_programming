#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @idx: positionto add node
 * @n: value of the new node
 * @head: head of the list
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos = 0;
	listint_t *temp, *current, *new = malloc(sizeof(listint_t));

	if (*head == NULL || head == NULL || new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
	}
	current = *head;
	while (current != NULL)
	{
		if (pos == idx - 1)
		{
			temp = current->next;
			new->n = n;
			current->next = new;
			new->next = temp;
			return (new);
		}
		else
		{
			pos++;
			current = current->next;
		}
	}
	free(new);
	return (NULL);
}
