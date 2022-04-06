#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @ac: argc.
 * @av: argv.
 * Return: 1 if success.
 */

int main(int ac, char **av)
{
	int fp_from, fp_to, valRead, valWrite, valClose_from, valClose_to;
	char buffer[1024];

	if (ac != 3)
	{	dprintf(2, "Usage: cp file_from file_to\n");
		exit(97); }
	fp_from = open(av[1], O_RDONLY);
	if (fp_from == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98); }
	fp_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fp_to == -1)
	{	dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	while (valRead > 0)
	{
		valRead = read(fp_from, buffer, 1024);
		if (valRead == -1)
		{	dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98); }
		valWrite = write(fp_to, buffer, valRead);
		if (valWrite == -1)
		{	dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}
	valClose_from = close(fp_from);
	if (valClose_from == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fp_from);
		exit(100);
	}
	valClose_to = close(fp_to);
	if (valClose_to == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fp_to);
		exit(100);
	}
	return (1);
}
