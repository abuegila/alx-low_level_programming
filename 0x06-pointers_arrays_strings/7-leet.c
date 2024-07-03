#include "main.h"
/**
 * leet - encoding the string to another
 * @n: the string to be processed
 * Return: a pointer to the string
 */
char *leet(char *n)
{
int i, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (n);
}
