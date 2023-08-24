#include "lists.h"
/**
 * free_list - function that free lis
 * @head: head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		free(temp->str);
		free(temp);
		head = head->next;
	}

}
