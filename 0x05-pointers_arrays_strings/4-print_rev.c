#include "main.h"

/**
 * print_rev - printing a string in reverse
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
int i, j, len;

i = 0;
while (s[i] != '\0')
{
i++;
}
len = i;
for (j = len - 1 ; j > -1 ; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
