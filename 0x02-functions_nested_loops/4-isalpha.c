#include "main.h"
/**
 *_isalpha - A program that checks for alphabet character
 *
 *@c: The character in ASCII code
 *
 *Return: 1 when alphabet is printed and 0 when its not an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
