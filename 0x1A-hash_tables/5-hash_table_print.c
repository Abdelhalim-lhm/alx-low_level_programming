#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: The hash table
 * Return: print hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i, fp = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (fp == 1)
			{
				printf(", ");
			}
			fp = 1;
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
