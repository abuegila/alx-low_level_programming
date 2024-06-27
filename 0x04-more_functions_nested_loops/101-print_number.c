#include "main.h"
/**
 * print_number - printing an integer
 * @n: the number to be printed
 * Return: void
 */

void print_number(int n)
{
int len;
int i;
int number;
int j;
int f;
int l;
int nu;

if (n < 0)
{
_putchar('-');
n = (-n);
}
len = 0;
number = n;

for (i = 0 ; number != 0 ; i++)
{
number /= 10;
len++;
}
for (j = 1 ; j <= len ; j++)
{
nu = n;
for (l = len ; l > j ; l--)
{
nu /= 10;
}
f = nu % 10;
printf("%d", f);
}
}
