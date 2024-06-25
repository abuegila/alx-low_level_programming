#include "main.h"
/**
 * print_last_digit - printing the last digit of a number
 * @n: paramter to get the last digit of it
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
int last_digit;

if (n < 0)
n = (-n);
last_digit = n % 10;
return (last_digit);
}
