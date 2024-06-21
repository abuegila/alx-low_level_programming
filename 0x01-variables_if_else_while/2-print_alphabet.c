#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase using putchar.
 * Return: Always 0.
 */
int main(void)
{
int i;

for (i = 97 ; i < 123 ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
