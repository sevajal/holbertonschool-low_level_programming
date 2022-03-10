#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * Includes all my prototypes for malloc and free 2.
 * @c: Character.
 * @size: size.
 * @s1: string 1.
 * @s2: string 2.
 * @b: integer.
 * @n: integer.
 * @nmemb: integer.
 * @min: integer min.
 * @max: integer max.
 * @ptr: pointer.
 * @old_size: old size.
 * @new_size: new size.
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
