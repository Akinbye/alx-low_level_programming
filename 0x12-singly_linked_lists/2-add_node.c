#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - adds new node
 *@head: pointer
 *@str: string to add
 *Return: integer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len = 0;

	while (str[len])
		len++;
	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;

	return (*head);
}
