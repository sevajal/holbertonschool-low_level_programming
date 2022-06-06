#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: is the hash table.
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	if (ht)
	{
		unsigned long int i = 0;
		hash_node_t *tmp;

		while (i < ht->size)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				ht->array[i] = ht->array[i]->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = ht->array[i];
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
