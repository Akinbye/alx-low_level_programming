#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - a function that bfrees dogs
 *@d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	while (d)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
