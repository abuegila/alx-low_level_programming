#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - returning the result of the process
 * @s: a pointer to the string
 * @accept: a pointer to the needed index
 * Return: the position of the first occurance of NULL
 */

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return (NULL);
}
