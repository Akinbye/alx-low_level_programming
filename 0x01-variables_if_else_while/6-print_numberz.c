#include <stdio.h>
/**
 *main - entry point
 *description: A program that prints all single digit
 *Return: 0
 */
int main(void)
{
	int num;

	for (num = 49; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
