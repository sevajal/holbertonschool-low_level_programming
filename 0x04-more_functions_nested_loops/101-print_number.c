#include "main.h"
/**
 * print_number -  prints a long number
 * @n: indicates the number
 * Return: 0
 */

void print_number(int n)
{
    if (n == 0)
        _putchar((n) + '0');
    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        _putchar((digit) + '0');
        /*como lo reverso?*/
    }
    while (n < 0)
    {
        int abs = (n * -1);
        int digit = abs % 10;
        abs = abs / 10;
        _putchar((digit) + '0');
        _putchar('-');
        /*como lo reverso?*/
    }
}
