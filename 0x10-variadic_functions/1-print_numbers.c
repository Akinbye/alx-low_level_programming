#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - function that prints numbers
 *@separator: what separates the numbers
 *@n: number of arguments
 *@...: variables to be printed
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int l;

	va_start(numbers, n);

	for (l = 0; l < n; l++)
	{
		printf("%d", va_arg(numbers, int));
		if (l != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
