#include <stdio.h>
/**
 * main - printing the first 50 number of fabionaci series
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
for (i = 1 ; i <= 50 ; i++)
{
tmp = value;
value += num;
num = tmp;
if (i == 50)
printf("%lu", value);
else
printf("%lu, ", value);
}
return (0);
}
