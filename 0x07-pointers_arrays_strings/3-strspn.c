#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: characer 1
 *@accept: character 2
 *Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				length++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (length);
		}
		s++;
	}
	return (length);
}
