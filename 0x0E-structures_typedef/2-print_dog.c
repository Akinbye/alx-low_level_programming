#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints struct dog
 *@d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL || d->owner == NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
