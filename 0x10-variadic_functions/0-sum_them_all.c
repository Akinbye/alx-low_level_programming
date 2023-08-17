#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: number of parameters
 *@...:parameters to calculate
 *Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list bm;
	unsigned int i, sum = 0;

	va_start(bm, n);

	for (i = 0; i < n; i++)
		sum += va_arg(bm, int);
	va_end(bm);
	return (sum);
}
