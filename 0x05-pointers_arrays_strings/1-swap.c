#include "main.h"

/**
 * swap_int - swapping the values of two integers
 * @a: pointer to the first value
 * @b: pointer to the second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
