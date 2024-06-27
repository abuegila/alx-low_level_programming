#include <stdio.h>
#include <stdbool.h>

/**
 * isPrime - checking if the number is prime or not
 * @x: the number to be checked
 * Return: false if it's not a prime otherwise true
 */
bool isPrime(long int x)
{
long int k;

if (x <= 1)
{
return (false);
}

for (k = 2 ; k * k <= x ; k++)
{
if (x % k == 0)
{
return (false);
}
}
return (true);
}
/**
 * max - checking the largest number between the results
 * @a: the last result
 * @b: the new result
 * Return: The value of the max
 */
long int max(long int a, long int b)
{
return ((a > b) ? a : b);
}
/**
 * main - printing the largest number (final result)
 * Return: Always 0
 */
int main(void)
{
long int n;
long int ans = 1;
long int i;

n = 612852475143;
for (i = 1 ; i * i <= n ; i++)
{
if (n % i == 0)
{
if (isPrime(i))
{
ans = max(ans, i);
}
if (isPrime(n / i))
{
ans = max(ans, n / i);
}
}
}
printf("%ld\n", ans);
return (0);
}
