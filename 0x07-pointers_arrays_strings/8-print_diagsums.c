#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - printing the sum of two dig
 * @a: a pointer to the first element of the matrix
 * @size: the size of the square matrix
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i;

sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
