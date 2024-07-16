#include "main.h"
/**
 * create_array - creating a dynamic array
 * @size: the size of the array
 * @c: the char to fill the array with
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *ccc;
unsigned int i;

if (size == 0)
return (NULL);
ccc = malloc(sizeof(char) * size);
if (ccc == NULL)
return (NULL);
for (i = 0; i < size; i++)
ccc[i] = c;
return (ccc);
}
