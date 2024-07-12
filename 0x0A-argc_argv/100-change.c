#include <stdio.h>
#include <stdlib.h>
/**
* calculate_min_coins - calc min coins
* @n: the number to be processed
* Return: the result after the process
**/
int calculate_min_coins(int n)
{
int ans;
int coins[] = {25, 10, 5, 2, 1};
int i;

ans = 0;
for (i = 0; i < 5; i++)
{
if (n >= coins[i])
{
ans += n / coins[i];
n %= coins[i];
}
}
return (ans);
}
/**
* main - checking the min num of coins
* @argc: the numbe of arguments
* @argv: the array of arguments
* Return: 0 if succses, 1 if failure
*/
int main(int argc, char *argv[])
{
int n, ans;

if (argc != 2)
{
printf("Error\n");
return (1);
}

n = atoi(argv[1]);

if (n < 0)
{
printf("0\n");
return (0);
}

ans = calculate_min_coins(n);
printf("%d\n", ans);

return (0);
}
