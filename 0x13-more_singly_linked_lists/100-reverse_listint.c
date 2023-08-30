#include "lists.h"
/**
 *reverse_listint - function that reverses a listint_t
 *@head: pointer
 *Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}
	*head = old;
	return (*head);
}
