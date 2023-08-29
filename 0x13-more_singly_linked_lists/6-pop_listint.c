#include "lists.h"
/**
 *pop_listint - function that deletes the head node
 *@head: pointer
 *Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *test;
	int m;

	if (!head || !*head)
		return (0);
	m = (*head)->n;
	test = (*head)->next;
	free(*head);
	*head = test;

	return (m);
}
