#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the text file to read.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 * if the file can not be opened or read, return 0.
 * if filename is NULL return 0.
 * if write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(letters);
	ssize_t valRead;
	ssize_t valWrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	valRead = read(fd, buffer, letters);
	if (valRead == -1)
		return (0);

	valWrite = write(STDOUT_FILENO, buffer, letters);
	if (valWrite == -1)
		return (0);

	close(fd);

	return (valRead);
}
