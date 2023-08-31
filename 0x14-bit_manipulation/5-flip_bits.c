#include "main.h"
/**
 *flip_bits -  returns the number of bits
 *@n: integer
 *@m: integer
 *Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, num = 0;
	unsigned long int new;
	unsigned long int x = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		new = x >> p;
		if (new & 1)
			num++;
	}
	return (num);
}
