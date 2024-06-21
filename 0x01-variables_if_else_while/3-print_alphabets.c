#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase then upercase using putchar.
 * Return: Always 0.
 */
int main(void)
{
int i;

for (i = 0 ; i < 52 ; i++)
{
if (i < 26)
putchar(i + 97);
else
putchar(i + 39);
}
putchar('\n');
return (0);
}
