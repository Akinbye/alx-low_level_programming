#include <stdio.h>
/**
 *main - entry point
 *description: number combinations
 *Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (i <= 57)
	{
		while (j <= 57)
		{
			if (!(i >= j))
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 48;
		i++;
	}
	return (0);
}
