#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: head of the list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0, loop;
	const listint_t *temp1, *temp2, *loop_node;

	if (head == NULL)
		return (0);
	temp1 = head;

	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		loop = 0;

		while (temp2 != NULL)
		{
			if (temp1 == temp2)
			{
				loop_node = temp2;
				loop = 1;
				break;
			}
			temp2 = temp2->next;
		}
		printf("[%p] %d\n", (void *)temp1, temp1->n);
		temp1 = temp1->next;
		count++;
	}
	if (loop == 0)
	{
		exit(98);
	}
	if (loop == 1)
	{
		printf("->[%p] %d\n", (void *)loop_node, loop_node->n);
	}
	return (count);
}
