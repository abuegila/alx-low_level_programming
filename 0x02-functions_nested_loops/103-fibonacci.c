#include <stdio.h>
/**
 * main - printing the even numbers of fabionaci series
 * Return: Always 0
 */
int main(void)
{
int i;
long  num;
long value;
long tmp;
unsigned long sum;

num = 0;
value = 1;
sum = 0;
for (i = 1 ; i <= 32 ; i++)
{
tmp = value;
value += num;
num = tmp;
if (value % 2 == 0)
sum += value;
}
printf("%lu\n", sum);
return (0);
}
