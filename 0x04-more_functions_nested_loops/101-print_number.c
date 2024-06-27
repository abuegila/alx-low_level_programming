#include "main.h"
/**
 * print_number - printing a number
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
int divisor;
int num;

num = n;
divisor = 1;
if (n < 0)
{
_putchar('-');
num = -n;
}
while (num / divisor >= 10)
{
divisor *= 10;
}
while (divisor > 0)
{
_putchar((num / divisor) +'0');
num %= divisor;
divisor /= 10;
}
}
