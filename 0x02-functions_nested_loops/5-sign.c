#include "main.h"
/**
 * print_sign - telling the sign of a number
 * @n: the number to be checked
 * Return: 1 if its a positive | 0 if its a zero | -1 if its a negative
 */
int print_sign(int n)
{
if (n > 0)
return (1);
else if (n == 0)
return (0);
else
return (-1);
}
