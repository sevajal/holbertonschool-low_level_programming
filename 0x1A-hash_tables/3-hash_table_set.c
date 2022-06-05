#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. Cannot be a empty string.
 * @value: is the value associated with the key.
 * value must be duplicated and can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 * In case of collision, add the new node at the beginning of the list.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	hash_node_t *tmp;

	if (ht)
	{
		if (!key)
			return (0);
		index = key_index((unsigned char *)key, ht->size);
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		tmp = ht->array[index];
		if (!tmp)
		{
			ht->array[index] = new;
			return (1);
		}
		else
		{
			while (tmp)
			{
				if (strcmp(tmp->key, key) == 0)
				{
					tmp->value = strdup(value);
					free(new);
					return (1);
				}
				tmp = tmp->next;
			}
			tmp = ht->array[index];
			new->next = tmp;
			ht->array[index] = new;
		return (1);
		}
	}
	return (0);
}
