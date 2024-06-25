#include "main.h"
/**
 * times_table - printing time table to 9
 * Return: void
 */
void times_table(void)
{
int i;
int j;
int value;
int last_digit;

for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
value = i * j;
if (value > 9)
{
last_digit = value % 10;
value /= 10;
_putchar(',');
_putchar(' ');
_putchar(value + '0');
_putchar(last_digit + '0');
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(value + '0');
}
}
_putchar('\n');
}
}
