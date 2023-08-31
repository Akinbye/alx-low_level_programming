#include "main.h"
/**
 *get_bit - returns the value of a bit
 *@n: integer
 *@index: index
 *Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = (n >> index) & 1;
	return (b);
}
