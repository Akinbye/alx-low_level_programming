#include "lists.h"
/**
 *free_listint_safe - function that frees a listint_t list
 *@h: pointer
 *Return: 0
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int d;
	listint_t *test;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			test = (*h)->next;
			free(*h);
			*h = test;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
