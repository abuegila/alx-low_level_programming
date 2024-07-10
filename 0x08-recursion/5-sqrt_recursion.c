#include "main.h"
int _sqrt_recursion(int n);
/**
 * check_n - getting the number
 * @n: the number to be checker
 * @initial_value: always 0
 * Return: -1 if not found or value if found
 */
int check_n(int n, int initial_value)
{
if (initial_value > n)
return (-1);
if (initial_value * initial_value == n)
return (initial_value);
return (check_n(n, initial_value + 1));
}
/**
 * _sqrt_recursion - getting the sqrt of a num
 * @n: the number to be checked
 * Return: -1 if not found or value if found
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (check_n(n, 0));
}
