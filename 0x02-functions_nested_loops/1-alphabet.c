#include "main.h"
/**
 *print_alphabet - A function that prints the alphabet, in lowercase
 *
 *Return: 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
