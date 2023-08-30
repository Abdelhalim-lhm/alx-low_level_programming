#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: head of the list
 * Return: the loop nod
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1, *temp2;

	if (head == NULL)
		return (NULL);
	temp1 = head;
	temp2 = temp1->next

	while (temp1 != NULL)
	{
		while (temp2 != NULL)
		{
			if (temp1 == temp2)
			{
				return (temp2);
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
		temp2 = temp1->next;
	}
	return (NULL);
}
