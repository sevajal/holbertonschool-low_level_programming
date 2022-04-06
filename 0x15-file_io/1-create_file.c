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
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it.
 * if filename is NULL return -1.
 * if text_content is NULL create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int valWrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
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
