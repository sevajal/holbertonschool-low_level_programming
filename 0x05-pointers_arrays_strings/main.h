#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * Includes all my prototypes
 * @c: The character to print
 * @n: The int to use.
 * @a: The int to use.
 * @b: The int to use.
 * @s: The char to use.
 * @str: The string to use.
 * @dest: String destination.
 * @src: String source.
 */

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);

#endif
