#include <stdlib.h>
#include "lists.h"

/**
 *list_len - number pf elements
 *@h: pointer
 *Return: integer
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
