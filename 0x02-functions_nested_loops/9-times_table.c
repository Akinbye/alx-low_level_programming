#include "main.h"
/**
 *times_table - A function that prints the 9 times table
 *
 *Return: 0
 */
void times_table(void)
{
	int a, b, c, m, n;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				m = c % 10;
				n = (c - m) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(n + 48);
				_putchar(m + 48);
			}
			else if (b != 0)
			{
				_putchar(44);
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(c + 48);
			}
			_putchar('\n');
		}
	}
}
