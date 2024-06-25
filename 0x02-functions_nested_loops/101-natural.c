#include "main.h"
#include <stdio.h>
/**
 * main - printing the multiples of 3 and 5 till 1024
 * Return: Always 0
 */
int main(void)
{
int i;
int sum;

sum = 0;
for (i = 0 ; i < 1024 ; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
}
printf("%d", sum);
return (0);
}
