#include "main.h"
/**
 * cap_string - capatlizing all the string
 * @n: the string to be processed
 * Return: a pointer to the string
 */
char *cap_string(char *n)
{
int i;

i = 0;
while (n[i] != '\0')
{
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
if (n[i - 1] == ',' || n[i - 1] == ';' || n[i - 1] == '.' ||
n[i - 1] == '!' || n[i - 1] == '?' || n[i - 1] == '"' ||
n[i - 1] == '(' || n[i - 1] == ')' || n[i - 1] == '{' ||
n[i - 1] == '}')
{
if (n[i] >= 97 && n[i] <= 122)
{
n[i] -= 32;
}
}
i++
}
return (n);
}
