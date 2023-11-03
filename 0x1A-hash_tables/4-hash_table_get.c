#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value
 * ssociated with a key
 * @ht: The hash  table
 * @key: The key
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	temp = ht->array[key_index((unsigned char *)key, ht->size)];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
