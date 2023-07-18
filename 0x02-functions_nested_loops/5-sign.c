#include "main.h"
/**
 *print_sign - A program that prints the symbol of a number
 *@n: the character in ASCII code
 *Return: 1 for numbers greater than 0, 0 for numbers
 *equal to 0 and -1 for numbers less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
