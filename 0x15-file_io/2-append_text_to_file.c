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
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: a NULL terminated string to add at the end.
 * Return: 1 on success, -1 on failure.
 * Do not create the file if it does not exist.
 * If filename is NULL return -1.
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int valWrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
