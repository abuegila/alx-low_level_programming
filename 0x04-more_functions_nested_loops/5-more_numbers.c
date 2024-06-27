#include "main.h"
/**
 * more_numbers - printing the number from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
int i;
int num;

i = 10;
num = 0;
while (i--)
{
while (num < 15)
{
if (num > 9)
_putchar('0' + num / 10);
_putchar('0' + num % 10);
num++;
}
num = 0;
_putchar('\n');
}
}
