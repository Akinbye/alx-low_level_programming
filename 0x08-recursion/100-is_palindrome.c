#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 *is_palindrome - function that returns 1 if a string is a palindrome
 *@s: a string
 *Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - length of string
 *@s: string
 *Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 *check_pal - checks the characters
 *@s: string
 *@i: integer
 *@len: length
 *Return: 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	else if (i >= len)
		return (1);
	else
		return (check_pal(s, i + 1, len - 1));
}
