#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * Includes all my prototypes for recursion.
 * @s: The string.
 * @c: Character.
 * @n: The int to use.
 * @x: The int to use.
 * @y: The int to use.
 * @s1: char 1
 * @s2: char 2
 */

int _putchar(char c);
char _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
