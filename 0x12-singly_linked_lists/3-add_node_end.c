#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end - adds node at the end
 *@head: pointer
 *@str: string to add
 *Return: integer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	add = malloc(sizeof(list_t));

	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->len = len;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = add;
	return (add);
}
