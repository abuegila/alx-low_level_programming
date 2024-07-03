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
if (n[0] >= 97 && n[0] <= 122)
{
n[0] = n[0] - 32;
}
if (n[i - 1] == ' ' || n[i - 1] == ',' || n[i - 1] == ';' || 
n[i - 1] == '.' || n[i - 1] == '\t' || n[i - 1] == '\n' ||
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
