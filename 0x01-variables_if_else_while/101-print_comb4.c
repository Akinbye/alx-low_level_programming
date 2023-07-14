#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;

	while (i <= 57)
	{
		while (j <= 57)
		{
			while (k <= 57)
			{
				if (i != j && i < j && j != k && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = 48;
			j++;
		}
		j = 48;
		i++;
	}
	return (0);
}
