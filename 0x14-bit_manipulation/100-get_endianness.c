#include "main.h"
/**
 *get_endianness - checks the endianness
 *Return: 0
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *c = (char *) &m;

	return (*c);
}
