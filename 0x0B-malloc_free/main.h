#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * Includes all my prototypes for malloc and free.
 * @c: Character.
 * @size: size.
 * @str: string.
 * @width: width.
 * @height: height.
 * @s1: string 1.
 * @s2: string 2.
 * @grid: grid.
 * @ac: integer.
 * @av: character.
 */

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
