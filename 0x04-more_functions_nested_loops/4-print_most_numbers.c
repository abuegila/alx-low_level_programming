#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers 0 to 9 !2,4
 * Return: void
 */

void print_most_numbers(void)
{
int i;

for (i = 48 ; i < 58 ; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
}
