#include "main.h"

/**
 * _strlen - calculating the length of a string
 * @s: the string to be evaluated
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i;

for (i = 0 ; i < s[i] != '\0' ; i++)
{
i++;
}
return (i);
}
