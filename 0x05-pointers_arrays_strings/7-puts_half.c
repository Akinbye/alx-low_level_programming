#include "main.h"
/**
 *puts_half - A function that prints half of a string
 *@str: a string
 *Return: 0
 */
void puts_half(char *str)
{
	int i, m, count;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	m = (count - 1) / 2;
	for (i = m + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
