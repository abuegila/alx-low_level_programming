#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be checked
 * @accept: the string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count;
char *a;

count = 0;
while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
{
break;
}
}
if (*a == '\0')
{
break;
}
count++;
s++;
}
return (count);
}
