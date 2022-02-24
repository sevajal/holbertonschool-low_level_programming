#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * Includes all my prototypes
 * @c: The character to print
 * @n: The int to use.
 * @a: The int to use.
 * @s2: The string 2.
 * @s1: The string 1.
 * @dest: String destination.
 * @src: String source.
 */

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif
