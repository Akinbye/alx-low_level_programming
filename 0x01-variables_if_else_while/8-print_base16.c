#include <stdio.h>
/**
 *main - entry point
 *description: A program that prints numbers of base 16
 *Return: 0
 */
int main(void)
{
	int n;
	int i;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		n++;
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
