#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

/**
 * function_pointers - prototypes
 * @name: name
 * @f: pointer function
 * @size: array size
 * array: array
 * @action: pointer function
 * @cmp: pointer function
 * @c: Character. 
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);

#endif