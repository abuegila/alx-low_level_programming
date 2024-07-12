#include "main.h"

/**
 * _puts - printing a string
 * @str: pointer to a tring to be printed
 * Return: void
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
