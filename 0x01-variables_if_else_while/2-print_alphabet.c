#include <stdio.h>
/**
 *main - entry point
 *description - A program that prints lower case letters
 *Return: 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
