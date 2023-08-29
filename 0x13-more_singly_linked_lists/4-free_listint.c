#include "lists.h"
/**
 *free_listint - function that frees a listint_t
 *@head: list to free
 *Return: integer
 */
void free_listint(listint_t *head)
{
	listint_t *test;

	while (head)
	{
		test = head->next;
		free(head);
		head = test;
	}
}
