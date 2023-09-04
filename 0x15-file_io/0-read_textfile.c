#include "main.h"
/**
 *read_textfile -  reads a text file and prints it to the POSIX
 *@filename: string pointer
 *@letters: number of characters to print
 *Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t nr, nw;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	buff = malloc(sizeof(char) * letters);

	if (fd == -1)
		return (0);
	nr = read(fd, buff, letters);
	nw = write(STDOUT_FILENO, buff, nr);

	close(fd);
	free(buff);

	return (nw);
}
