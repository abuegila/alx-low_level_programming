#include <stdio.h>
/**
 * main-prints all possible different combinations of two digits.
 * Return: Always 0.
 */
int main(void)
{
int tens, ones;
for (tens = 0; tens <= 8; tens++)
{
for (ones = tens + 1; ones <= 9; ones++)
{
putchar(tens + '0');
putchar(ones + '0');
if (tens != 8 || ones != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
