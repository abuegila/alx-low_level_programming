#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main-Determines last digit, and prints a message based on it.
 * Return: Always 0.
 */
int main(void)
{
int n;
int tmp;

srand(time(0));
n = rand() - RAND_MAX / 2;
tmp = n % 10;
if (tmp < 6 && tmp != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tmp);
else if (tmp > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, tmp);
else
printf("Last digit of %d is %d and is 0\n", n, tmp);
return (0);
}
