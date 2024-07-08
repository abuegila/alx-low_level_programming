#include "main.h"
/**
 * _strchr - getting the substring starting from  c
 * @s: the string to be checked
 * @c: the character to search for
 * Return: a pointer to the first occurance
 */

char *_strchr(char *s, char c)
{
for (;;)
{
if (*s == c)
return (s);
s++;
}
return (0);
}
