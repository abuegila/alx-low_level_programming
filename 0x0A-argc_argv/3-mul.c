#include <stdio.h>
#include <stdlib.h>
/**
 * main - multplying 2 nums
 * @argc: the numbers
 * @argv: the array of the nums
 * Return: 0 or 1 if there is less than 2 nums
 */
int main(int argc, char const *argv[])
{
int i, j;

i = atoi(argv[1]);
j = atoi(argv[2]);

if (argc == 2)
printf("%d\n", i *j);
else
{
printf("Error\n");
return (1);
}
return (0);
}
