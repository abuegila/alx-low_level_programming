#include <stdlib.h>
#include "main.h"
/**
 * *_memset - filling memory with a constant byte
 * @s: the memory allocation  to be filled
 * @b: char to be copied
 * @n: number of times to copy b
 * Return: a pointer to allocated s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * *_calloc - allocating memory for an array
 * @nmemb: number of elements of the array
 * @size: the size of each index
 * Return: a pointed to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
