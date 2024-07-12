#include <stdio.h>
/**
 * main - printing all args
 * @argc: the number of args
 * @argv: the array of args
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
