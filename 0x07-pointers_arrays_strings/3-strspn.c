#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: characer 1
 *@accept: character 2
 *Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int length = 0;

	while (*s && *accept && *s == *accept)
	{
		length++;
		s++;
		accept++;
	}
	return (length);
}
