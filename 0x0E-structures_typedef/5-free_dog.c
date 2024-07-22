#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - freeing the memory allocated the dog
 * @d:the string to free its elements
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
