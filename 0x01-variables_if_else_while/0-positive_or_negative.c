#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main-Generates a random number, checks if it is positive, negative, or zero,
 *        and prints the result.
 * Return: Always 0.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is positive\n", n);
return (0);
}
