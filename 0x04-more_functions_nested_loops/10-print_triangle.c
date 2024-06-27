#include "main.h"
/**
 * print_triangle - printing a triangle shape
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int i;
int j;
int x;

if (size <= 0)
_putchar('\n');

for (j = 0 ; j < size ; j++)
{
for (i = size - 2 ; i >= j ; i--)
_putchar(' ');
for (x = 0 ; x <= j ; x++)
_putchar('#');
_putchar('\n');
}
}
