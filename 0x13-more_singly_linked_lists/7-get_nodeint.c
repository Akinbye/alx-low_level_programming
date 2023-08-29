#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node
 *@head: pointer
 *@index: index of node
 *Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *test = head;

	while (test && b < index)
	{
		test = test->next;
		b++;
	}
	return (test ? test : NULL);
}
