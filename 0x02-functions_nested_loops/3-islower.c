#include "main.h"
/**
 *_islower - returns 1 if input is lower case character
 *
 *@c: the character in ASCII code
 *
 *Return: 1 for lower case, 0 for rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
