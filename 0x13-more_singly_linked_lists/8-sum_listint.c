#include "lists.h"
/**
 *sum_listint - function that returns the sum
 *@head: pointer
 *Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *test = head;

	while (test)
	{
		sum += test->n;
		test = test->next;
	}
	return (sum);
}
