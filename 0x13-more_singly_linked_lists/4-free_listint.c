#include "lists.h"
/**
 * free_listint - function that free listint
 * @head: head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;

		free(temp);
		head = head->next;
	}

}
