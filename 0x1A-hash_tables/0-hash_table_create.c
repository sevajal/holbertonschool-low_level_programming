#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 * Return: a pointer to the newly created hash table
 * or NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_ht;
	hash_node_t **array;

	my_ht = malloc(sizeof(hash_table_t));
	if (my_ht == NULL)
		return (NULL);
	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
		return (NULL);
	my_ht->size = size;
	my_ht->array = array;
	return (my_ht);
}
