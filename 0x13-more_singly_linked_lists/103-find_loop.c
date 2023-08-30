#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: head of the list
 * Return: the loop node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1, *temp2;

	if (head == NULL)
		return (NULL);
	temp1 = head;

	while (temp1 != NULL && temp->next != NULL )
	{
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if (temp1 == temp2)
			{
				return (temp2);
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (NULL);
}
