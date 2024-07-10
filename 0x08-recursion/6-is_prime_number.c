#include "main.h"
int check_prime(int n, int initial_value);
/**
 * is_prime_number - checking if the num is prime
 * @n: the number to be checked
 * Return: the value 1 if it is 0 it it's not
 */

int is_prime_number(int n)
{
if (n == 1)
return (0);
return (check_prime(n, 2));
}

/**
 * check_prime - checking on the whole numbers
 * @n: the number to be checked
 * @initial_value: always 2
 * Return: the value 1 if it is 0 if it's not
 */
int check_prime(int n, int initial_value)
{
if (initial_value == n)
return (1);
if (n % initial_value == 0)
return (0);
return (check_prime(n, initial_value + 1));
}
