#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

typedef struct select
{
    char *type;
    void (*f)(va_list);
} selection;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void printchar(va_list types);
void printint(va_list types);
void printfloat(va_list types);
void printstr(va_list types);

#endif
