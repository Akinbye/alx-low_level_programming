#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end
 *@head: pointer
 *@n: data
 *Return: integer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *test = *head;

	add = malloc(sizeof(listint_t));

	if (!add)
		return (NULL);
	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (test->next)
		test = test->next;
	test->next = add;
	return (add);
}
