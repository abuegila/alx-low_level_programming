#include "main.h"
/**
 * _strcmp - comparing 2 strings`
 * @s1: the first string
 * @s2: the second string
 * Return: the difference between the strings
 */
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
