#include <stdio.h>
#include <stdbool.h>

#define ll long long

/**
 * isPrime - checking if the number is prime or not
 * @x: the number to be checked
 * Return: false if it's not a prime otherwise true
 */
bool isPrime(ll x)
{
if (x <= 1)
{
return (false);
}
for (ll i = 2 ; i * i <= x ; i++)
{
if (x % i == 0)
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
ll max(ll a, ll b)
{
return ((a > b) ? a : b);
}
/**
 * main - printing the largest number (final result)
 * Return: Always 0
 */
int main(void)
{
ll n;
ll ans = 1;
ll i
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
printf("%lld\n", ans);
return (0);
}
