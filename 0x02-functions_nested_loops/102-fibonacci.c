#include "main.h"
#include <stdio>
/**
 * main - printing the first 50 number of fabionaci series
 * Return: Always 0
 */
int main(void)
{
int i;
int num;
int value;
int tmp;

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
