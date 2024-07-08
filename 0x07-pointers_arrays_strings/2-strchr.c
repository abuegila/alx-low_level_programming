#include "main.h"

/**
 * _strchr - returning a pointer to the new element
 * @s: the pointer to the character
 * @c: the char to search for
 * Return: A pointer to the new occurance
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
