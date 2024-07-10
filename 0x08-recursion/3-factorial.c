#include "main.h"
/**
 * factorial - calculating the fac of a num
 * @n: the number to be processed
 * Return: the result of fac
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
