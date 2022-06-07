#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table.
 * @size: size of the array.
 * Return: a pointer to the newly created sorted hash table
 * or NULL if something went wrong.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *my_sht;
	shash_node_t **array;
	shash_node_t *shead = NULL;
	shash_node_t *stail = NULL;

	my_sht = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (my_sht == NULL)
		return (NULL);
	array = calloc(size, sizeof(shash_node_t *));
	if (array == NULL)
		return (NULL);
	my_sht->size = size;
	my_sht->array = array;
	my_sht->shead = shead;
	my_sht->stail = stail;

	return (my_sht);
}

/**
 * shash_table_set - adds an element to the sorted hash table.
 * @ht: is the sorted hash table you want to add or update the key/value to.
 * @key: is the key. Cannot be a empty string.
 * @value: is the value associated with the key.
 * value must be duplicated and can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 * In case of collision, add the new node at the beginning of the list.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;
	shash_node_t *tmp;
	shash_node_t *head_tmp;

	if (!ht || !key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	head_tmp = ht->shead;
	if (head_tmp == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		new->sprev = NULL;
		new->snext = NULL;
		return (1);
	}
	while (head_tmp && head_tmp->key < key)
		head_tmp = head_tmp->snext;
	if (head_tmp->sprev == NULL)
	{
		head_tmp->sprev = new;
		ht->shead = new;
	}
	else
	{
		head_tmp->sprev->snext = new;
		new->sprev = head_tmp->sprev;
	}
	head_tmp->sprev = new;
	new->snext = head_tmp;
	if (!head_tmp)
	{
		printf("Im here");
		new->sprev = head_tmp;
		new->snext = NULL;
		head_tmp->snext = new;
		ht->stail = new;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: is the sorted hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht)
	{
		if (!key)
			return (NULL);
		index = key_index((unsigned char *)key, ht->size);
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
		return (NULL);
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table.
 * @ht: is the sorted hash table.
 * Return: Nothing.
 */

void shash_table_print(const shash_table_t *ht)
{
	char *split = "";
	shash_node_t *tmp;

	if (ht)
	{
		printf("{");
		tmp = ht->shead;
		while (tmp)
		{
			printf("%s'%s': '%s'", split, tmp->key, tmp->value);
			split = ", ";
			tmp = tmp->snext;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - prints a reversed sorted hash table.
 * @ht: is the sorted hash table.
 * Return: Nothing.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	char *split = "";
	shash_node_t *tmp;

	if (ht)
	{
		printf("{");
		tmp = ht->stail;
		while (tmp)
		{
			printf("%s'%s': '%s'", split, tmp->key, tmp->value);
			split = ", ";
			tmp = tmp->sprev;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - deletes a sorted hash table.
 * @ht: is the hash table.
 * Return: Nothing.
 */

void shash_table_delete(shash_table_t *ht)
{
	if (ht)
	{
		shash_node_t *tmp;

		tmp = ht->shead;
		while (tmp)
		{
			ht->shead = ht->shead->snext;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = ht->shead;
		}
		free(ht->array);
		free(ht->shead);
		free(ht->stail);
		free(ht);
	}
}
