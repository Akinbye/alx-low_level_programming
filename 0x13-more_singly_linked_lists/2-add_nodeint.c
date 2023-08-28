#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning
 *@head: pointertothe node
 *@n: data
 *Return: integer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (!add)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
