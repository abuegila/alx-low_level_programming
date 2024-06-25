#include "main.h"
/**
 * print_times_table - printing the times table till a specific number
 * @n: the number to print until it
 * Return: void
 */
void print_times_table(int n)
{
int i, j, value;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
value = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
if (value < 10)
_putchar(' '), _putchar(' '), _putchar(' ');
else if (value < 100)
_putchar(' '), _putchar(' ');
else
_putchar(' ');
}
if (value >= 100)
_putchar(value / 100 + '0');
if (value >= 10)
_putchar((value / 10) % 10 + '0');
_putchar(value % 10 + '0');
}
_putchar('\n');
}
}
}
