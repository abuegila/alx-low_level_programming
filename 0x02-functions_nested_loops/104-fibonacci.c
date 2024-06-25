#include <stdio.h>
/**
 * main - printing the first 98 numbers of fabionaci series
 * Return: Always 0
 */
int main()
{
unsigned long a = 1, b = 2, temp;
int i;

printf("%lu, %lu", a, b);
for (i = 3 ; i <= 98 ; i++)
{
temp = a + b;
a = b;
b = temp;
printf(", %lu", b);
}
printf("\n");
return (0);
}
