#include "lists.h"
/**
 *delete_nodeint_at_index - function that deletes the node
 *@head: pointer
 *@index: index of node
 *Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *test = *head;
	listint_t *main = NULL;
	unsigned int b = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(test);
		return (1);
	}
	while (b < index - 1)
	{
		if (!test || !(test->next))
			return (-1);
		test = test->next;
		b++;
	}
	main = test->next;
	test->next = main->next;
	free(main);
	return (1);
}
