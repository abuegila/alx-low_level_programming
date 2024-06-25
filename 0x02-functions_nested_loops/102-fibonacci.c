#include "main.h"
#include <stdio.h>
/**
 * main - printing the first 50 number of fabionaci series
 * Return: Always 0
 */
int main(void)
{
int i;
unsigned long num;
unsigned long value;
unsigned long tmp;

num = 0;
value = 1;
for (i = 1 ; i < 50 ; i++)
{
tmp = value;
value += num;
num = tmp;
printf("%d, ", value);
}
return (0);
}
