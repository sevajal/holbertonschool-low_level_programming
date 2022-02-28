#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * Includes all my prototypes
 * @c: The character to print
 * @s: The string.
 * @b: The input char.
 * @n: The int to use.
 * @a: The int to use.
 * @dest: String destination.
 * @src: String source 
 * @accept: The input char.
 * @haystack: The input char.
 * @needle: The input char.
 * @size: size
 */

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
