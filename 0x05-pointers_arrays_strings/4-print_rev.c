#include "main.h"
/**
 *print_rev - A function that prints a string in reverse
 *@s: a string
 *Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int m;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (m = longi; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
