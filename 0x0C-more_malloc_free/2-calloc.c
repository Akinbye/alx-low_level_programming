#include <stdlib.h>
#include "main.h"
/**
 *_memset - fills memory with constant byte
 *@s: character
 *@b: character
 *@n: integer
 *Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 *_calloc - function that allocates memory
 *@nmemb: number of elements
 *@size: size of element
 *Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
