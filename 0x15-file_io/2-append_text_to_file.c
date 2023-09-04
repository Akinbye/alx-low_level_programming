#include "main.h"
/**
 *append_text_to_file - appends text at the end of a file
 *@filename: string pointer
 *@text_content: content of the file
 *Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int r;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		r = write(fd, text_content, letters);
		if (r == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
