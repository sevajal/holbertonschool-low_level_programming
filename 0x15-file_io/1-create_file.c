#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 * if the file can not be opened or read, return 0.
 * if filename is NULL return 0.
 * if write fails or does not write the expected amount of bytes, return 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int valWrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 00600 | O_TRUNC);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	valWrite = write(fd, text_content, _strlen(text_content));
	if (valWrite == -1)
		return (-1);

	close(fd);

	return (1);
}
