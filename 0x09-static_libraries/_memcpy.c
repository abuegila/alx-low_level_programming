#include "main.h"

/**
 * *_memcpy - copies an array to another
 * @dest: destination
 * @src: memory to copy from
 * @n: number of bytes to loop for
 * Return: a pointer to the destineation array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
