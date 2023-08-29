#include "lists.h"
/**
 *insert_nodeint_at_index - function that inserts a new node
 *@head: pointer
 *@idx: index
 *@n: data
 *Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *add;
	listint_t *test = *head;

	add = malloc(sizeof(listint_t));

	if (!add || !head)
		return (NULL);
	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}
	for (b = 0; test && b < idx; b++)
	{
		if (b == idx - 1)
		{
			add->next = test->next;
			test->next = add;
			return (add);
		}
		else
			test = test->next;
	}
	return (NULL);
}
