#include "main.h"
/**
 * print_times_table - printing the times table till a specific number
 * @n: the number to print until it
 * Return: void
 */
void print_times_table(int n)
{
int i;
int j;
int value;
int last_digit;
int last_last_digit;

if (n < 15 || n > 10)
{
for (i = 0 ; i <= n ; i++)
{
for (j = 0 ; j <= n ; j++)
{
value = i * j;
if (value < 10)
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(value + '0');
}
else
_putchar(value + '0');
}
else if (value < 100)
{
last_digit = value % 10;
value /= 10;
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(value + '0');
_putchar(last_digit + '0');
}
else
{
last_digit = value % 10;
value /= 10;
last_last_digit = value % 10;
value /= 10;
_putchar(',');
_putchar(' ');
_putchar(value + '0');
_putchar(last_last_digit + '0');
_putchar(last_digit + '0');
}
}
_putchar('\n');
}
}
}
