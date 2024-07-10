#include "main.h"
/**
 * wildcmp - checking if 2 strings are identical
 * @s1: the first string to be checked
 * @s2: the second string to be checked
 * Return: 1 if they are 0 if they are not
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0' && *s1 == '\0')
return (1);
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
return (0);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
return (0);
}
