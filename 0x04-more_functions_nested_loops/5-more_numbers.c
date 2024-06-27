#include "main.h"
/**
 * more_numbers - printing the number from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
int i;
int j;
char str[] = "1011121314";

for (i = 48 ; i < 58 ; i++)
{
_putchar(i);
}
for (j = 0 ; str[j] ; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
