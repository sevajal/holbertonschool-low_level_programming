#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table.
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *split = "";

	printf("{");
	if (ht)
	{
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				while (ht->array[i])
				{
					printf("%s'%s': '%s'", split, ht->array[i]->key, ht->array[i]->value);
					split = ", ";
					ht->array[i] = ht->array[i]->next;
				}
			}
			i++;
		}
	}
	printf("}\n");
}
