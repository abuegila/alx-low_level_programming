#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase without q,e using putchar.
 * Return: Always 0.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
