#include "main.h"

/**
 * _memset - changing the firnst n bytes
 * @s: The string to be changed
 * @b: The string to change the byte to
 * @n: The number of bytes to be changed
 * Return: A pointer to the final string
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
return (s);
}
