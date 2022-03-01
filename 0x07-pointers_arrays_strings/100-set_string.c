#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: double pointer
 * @to: pointer
 * Return: 0.
 */

void set_string(char **s, char *to)
{
    **s = *to;
}
