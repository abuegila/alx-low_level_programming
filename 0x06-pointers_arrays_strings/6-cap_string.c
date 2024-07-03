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
if (n[i - 1] == ',' || n[i - 1] == ';' || n[i - 1] == '.' ||
n[i - 1] == '!' || n[i - 1] == '?' || n[i - 1] == '"' ||
n[i - 1] == '(' || n[i - 1] == ')' || n[i - 1] == '{' ||
n[i - 1] == '}' || i == 0)
n[i] -= 32;
i++
}
return (n);
}
