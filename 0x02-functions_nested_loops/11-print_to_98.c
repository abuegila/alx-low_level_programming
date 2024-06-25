#include "main.h"
/**
 * print_to_98 - printing number to 89
 * @n: the number to start from
 * Return: void
 */
void print_to_98(int n)
{
int i;

for (i = n; i != 98; i += (n < 98) ? 1 : -1)
{
if (i < 0)
{
_putchar('-');
if (i <= -100)
_putchar('0' - (i / 100) % 10);
if (i <= -10)
_putchar('0' - (i / 10) % 10);
_putchar('0' - i % 10);
}
else
{
if (i >= 100)
_putchar('0' + (i / 100) % 10);
if (i >= 10)
_putchar('0' + (i / 10) % 10);
_putchar('0' + i % 10);
}
_putchar(',');
_putchar(' ');
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
