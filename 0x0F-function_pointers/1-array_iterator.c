#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - function that executes a function
 *@array: the array
 *@size: the size of element
 *@action: the pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
