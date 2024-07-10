#include "main.h"
/**
 * _strlen_recursion - getting the lgenth of string
 * @s: the string to be checked
 * Return: the value of length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
