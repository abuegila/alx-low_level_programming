#include "main.h"
/**
 * jack_bauer - printing the clock of jack_bauer
 * Return: void
 */
void jack_bauer(void)
{
int i;
int j;
int x;
int y;

for (x = 0 ; x < 3 ; x++)
{
if (x == 2 && y == 4)
break;
for (y = 0 ; y < 10 ; y++)
{
if (x == 2 && y == 4)
break;
for (i = 0 ; i < 6 ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
_putchar(x + '0');
_putchar(y + '0');
_putchar(':');
_putchar(i + '0');
_putchar(j + '0');
_putchar('\n');
}
}
}
}
}
