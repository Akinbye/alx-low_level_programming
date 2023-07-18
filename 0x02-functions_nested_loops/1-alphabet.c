#include "main.h"
/**
 *main - entry point
 *
 *Return: 0
 */
void print_alphabet(void);
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
	return (0);
}
