#include <stdio.h>
/**
 *main - entry point
 *description: A program that prints decimal numbers
 *Return: 0
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
