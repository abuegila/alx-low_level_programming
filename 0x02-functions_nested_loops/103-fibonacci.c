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

num = 0;
value = 1;
for (i = 1 ; i <= 32 ; i++)
{
tmp = value;
value += num;
num = tmp;
if (value % 2 == 0)
{
if (value == 3524578)
printf("%lu\n", value);
else
printf("%lu, ", value);
}
}
return (0);
}
