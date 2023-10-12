#include "lists.h"
/**
 * free_dlistint -function that frees a dlistint_t list
 * @head: head of the list to free
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
