#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @ac: argc.
 * @av: argv.
 * Return: 1 if success.
 */

int main(int ac, char **av)
{
	ssize_t valRead, valWrite, valClose_from, valClose_to;
	int fd_from, fd_to;
	char buffer[1024];

	if (ac != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98); }
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd_to == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	valRead = 1024;
	while (valRead > 0)
	{
		valRead = read(fd_from, buffer, 1024);
		if (valRead == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98); }
		valWrite = write(fd_to, buffer, valRead);
		if (valWrite == -1 || valRead != valWrite)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}
	valClose_from = close(fd_from);
	if (valClose_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	valClose_to = close(fd_to);
	if (valClose_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (1);
}
