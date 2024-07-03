#include "main.h"

/**
 * cap_string - capitalizing all words of a string
 * @n: the string to be processed
 * Return: a pointer to the string
 */
char *cap_string(char *n)
{
int i;

i = 0;
while (n[i] != '\0')
{
if (i == 0 && n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
if (i > 0 && (n[i - 1] == ' ' || n[i - 1] == ',' || n[i - 1] == ';' || 
n[i - 1] == '.' || n[i - 1] == '\t' || n[i - 1] == '\n' ||
n[i - 1] == '!' || n[i - 1] == '?' || n[i - 1] == '"' ||
n[i - 1] == '(' || n[i - 1] == ')' || n[i - 1] == '{' ||
n[i - 1] == '}'))
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] -= 32;
}
}
i++;
}
return (n);
}
