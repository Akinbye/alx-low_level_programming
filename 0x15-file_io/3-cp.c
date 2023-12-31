#include "main.h"
#include <stdio.h>
/**
 *error - checks for error
 *@file_from: first file
 *@file_to: secondfile
 *@argv: argument
 */
void error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 *main - copy file contents to another
 *@argc: argument number
 *@argv: arguments given
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err;
	ssize_t n, r;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, buff, 1024);

		if (n == -1)
			error(-1, 0, argv);
		r = write(file_to, buff, n);

		if (r == -1)
			error(0, -1, argv);
	}
	err = close(file_from);

	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err = close(file_to);

	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
