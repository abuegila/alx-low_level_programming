#include "main.h"
/**
 * print_square - printing a square shape
 * @size: the size of the square shape
 * Return: void
 */

void print_square(int size)
{
int i;
int j;

for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
