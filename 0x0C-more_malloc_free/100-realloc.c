#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocating memory bytes
 * @ptr: a pointer to the memory previsouly allocated
 * @old_size: the size of the allocated memory for ptr
 * @new_size: the new size of the new memory
 * Return: a pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
char *old_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
new_ptr = malloc(new_size);
if (!new_ptr)
return (NULL);
old_ptr = ptr;
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
new_ptr[i] = old_ptr[i];
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
new_ptr[i] = old_ptr[i];
}
free(ptr);
return (new_ptr);
}
