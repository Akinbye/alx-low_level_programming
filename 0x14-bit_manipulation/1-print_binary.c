#include "main.h"
/**
 *print_binary - function that prints the
 *binary representation of a number
 *@n: integer
 */
void print_binary(unsigned long int n)
{
	int m, num = 0;
	unsigned long int new;

	for (m = 63; m >= 0; m--)
	{
		new = n >> m;

		if (new & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
