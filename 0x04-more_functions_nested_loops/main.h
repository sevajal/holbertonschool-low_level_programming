#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * Includes all my prototypes
 * @c: The character to print
 * 
 *  
 */

int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);

#endif