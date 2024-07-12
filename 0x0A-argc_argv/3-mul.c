#include <stdio.h>
/**
 * main - multplying 2 nums
 * @argc: the numbers
 * @argv: the array of the nums
 * Return: 0 or 1 if there is less than 2 nums
 */
int main(int argc, char const *argv[])
{
if (argc == 2)
printf("%d", argv[1] * argv[2]);
else
{
printf("Error");
return (1);
}
return (0);
}
