#include "lists.h"
/**
 *free_listint2 - function that frees a listint_t
 *@head: pointer to the list to be freed
 *Return: integer
 */
void free_listint2(listint_t **head)
{
	listint_t *test;

	if (head == NULL)
		return;
	while (*head)
	{
		test = (*head)->next;
		free(*head);
		*head = test;
	}
	*head = NULL;
}
