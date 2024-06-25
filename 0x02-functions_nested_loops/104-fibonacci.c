#include <stdio.h>
/**
 * numLength - returns the value of the length of a number.
 * @num: the number to be checked.
 * Return: The length of the number
 */
int numLength(int num)
{
int length;
length = 0;
{
if (!num)
return (1);
while (num)
num = num / 10;
{
length += 1;
}
}
return (length);
}
/**
 * main - returns the value of the length of a number.
 * Return: Always 0
 */
int main(void)
{
int count, initialos;
unsigned long f1, f2, sum, mx, flo, f2o, sumo;

f1 = 1;
f2 = 2;
mx = 100000000;
flo = 0;
f2o = 0;
sumo = 0;
for (count = 1 ; count <= 98 ; count++)
{
if (flo > 0)
printf("%lu", flo);
initialos = numLength(mx) - numLength(f1);
while (flo > 0 && initialos > 0)
{
printf("%d", 0);
initialos--;
}
printf("%lu", f1);
sum = (f1 + f2) % mx;
sumo = flo + f2o + (f1 + f2) / mx;
f1 = f2;
flo = f2o;
f2 = sum;
f2o = sumo;
if (count != 98)
printf(", ");
else
printf("\n");
}
return (0);
}
