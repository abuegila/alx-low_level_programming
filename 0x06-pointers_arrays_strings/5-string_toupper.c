#include "main.h"
/**
 * string_toupper - changing the string to ba all uppercase
 * @n: the string to be processed
 * Return: a pointer to the string
 */
char *string_toupper(char *n)
{
int i;

i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (n);
}
