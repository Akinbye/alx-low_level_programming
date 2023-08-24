#include <stdio.h>

void mine(void)__attribute__((constructor));
/**
 *mine - prints a sentence
 */
void mine(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
