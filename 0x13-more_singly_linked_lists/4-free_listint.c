#include "lists.h"
/**
 * free_listint - function that free listint
 * @head: head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;

		free(temp);
		head = head->next;
	}
}
