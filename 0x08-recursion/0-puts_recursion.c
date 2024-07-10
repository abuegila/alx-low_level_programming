#include "main.h"
/**
 * _puts_recursion - printing a string using rec
 * @s: the string to be processed
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
